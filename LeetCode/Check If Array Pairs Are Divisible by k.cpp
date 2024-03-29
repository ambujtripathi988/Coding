
// https://leetcode.com/problems/check-if-array-pairs-are-divisible-by-k/description/

class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        map<int,int> m;
        for(int i=0;i<arr.size();i++)
        {
            m[((arr[i]%k)+k)%k]++;
        }
        for(auto it = m.begin();it!=m.end();it++)
        {
            if(it->first == 0)
            {
                if(it->second % 2 != 0)       
                    return false;     
            }
            else if(it->second != m[k - it->first])
                return false;
            
            
            else if(m.find(k-it->first) == m.end())
                return false;
        }
        return true;
    }
};
