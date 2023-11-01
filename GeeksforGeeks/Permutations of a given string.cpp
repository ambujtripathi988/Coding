
// https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1

class Solution
{
    public:
        void permu(int i,string S,set<string> &ans)
        {
            if(i>=S.size())
            {
                ans.insert(S);
                return;
            }

            for(int index=i;index<S.size();index++)
            {
                swap(S[index],S[i]);
                permu(i+1,S,ans);
                swap(S[index],S[i]);
            }
        
        }
        
        vector<string>find_permutation(string S)
        {
            set<string> ans;

            vector<string> result;
            permu(0,S,ans);


            result.assign(ans.begin(),ans.end());
            sort(result.begin(),result.end());
            return result;
        }
};
