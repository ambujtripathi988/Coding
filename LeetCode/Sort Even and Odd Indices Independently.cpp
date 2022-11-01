
// https://leetcode.com/problems/sort-even-and-odd-indices-independently/

class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& arr) {
        vector<int> a;
        vector<int> b;
        
        for(int i=0;i<arr.size();i++)
        {
            if(i%2==0)
                a.push_back(arr[i]);
            else
                b.push_back(arr[i]);
        }
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<int>());         // sorts in descending order
        
        for(int i=0;i<arr.size();i++)
        {
            if(i%2==0){
                arr[i] = a[0];
                a.erase(a.begin());
            } else {
                arr[i] = b[0];
                b.erase(b.begin());
            }
        }
        return arr;
    }
};
