
// https://leetcode.com/problems/valid-parenthesis-string/description/

class Solution {
public:
    vector<vector<vector<int>>>dp;
    bool checkValidString(string s) {
        
        int n=s.length();
        dp.resize(n,vector<vector<int>>(n,vector<int>(n,-1)));
        int open=0;
        int close=0;
        int idx=0;
        return fun(s,idx,open,close);
    }
    bool fun(string &s,int idx,int open,int close)
    {
         if(idx>=s.length())
         {
             if(open==close)
                 return true;
             else
                 return false;
         }
         if(close>open)
             return false;
         if(dp[idx][open][close]!=-1)
             return dp[idx][open][close];
        
         if(s[idx]=='(')
         {
              return dp[idx][open][close]=fun(s,idx+1,open+1,close);
         }
         if(s[idx]==')')
         {
              return dp[idx][open][close]=fun(s,idx+1,open,close+1);
         }
         else if(s[idx]=='*')
         {
             bool a =  fun(s,idx+1,open,close);   //just empty 
             bool b =  fun(s,idx+1,open+1,close);
             bool c =  fun(s,idx+1,open,close+1);
             
             return dp[idx][open][close]=a or b or c;
         }
         return false;
    }
};
