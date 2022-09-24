
// https://leetcode.com/problems/baseball-game/

class Solution {
public:
    int calPoints(vector<string>& s) {
        stack<int>ss;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!="C"&&s[i]!="D"&&s[i]!="+")
            {
                int x=stoi(s[i]);
                ss.push(x);
            }
            else if(s[i]=="C")
                ss.pop();
            else if(s[i]=="D")
            {
                ss.push(ss.top()*2);
            }
            else if(s[i]=="+")
            {
                int ans=ss.top();
                ss.pop();
             
                int y=ans+ss.top();
                ss.push(ans);
                ss.push(y);
            }
        }
        int sum=0;
        while(ss.empty()==false)
        {
            sum+=ss.top();
            ss.pop();
        }
        return sum;
    }
};
