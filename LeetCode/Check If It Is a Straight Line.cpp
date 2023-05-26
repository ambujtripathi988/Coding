
// https://leetcode.com/problems/check-if-it-is-a-straight-line/description

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& pt) {
        int n = pt.size();
        sort(pt.begin(),pt.end());
        if( n == 1 || n == 2){
            return true;
        }
        double slope = (double)(pt[1][1]-pt[0][1]) / (double)(pt[1][0] - pt[0][0]);
        for(int i =1;i<n-1;i++){
            double tempS = (double)(pt[i+1][1]-pt[i][1]) / (double)(pt[i+1][0] - pt[i][0]);
            if( abs(tempS) != abs(slope)){
                return false;
            }
        }
        return true;
    }
};
