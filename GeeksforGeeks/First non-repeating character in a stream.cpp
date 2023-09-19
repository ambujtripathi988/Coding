
// https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1

class Solution {
    public:
        string FirstNonRepeating(string A){
            // Code here
            
            unordered_map<char,int> count ;
            queue<char> q ;
            string ans = "" ;
            
            for(int i = 0 ; i < A.length() ; i++)
            {
                char ch = A[i] ;
                
                // increase count 
                count[ch] ++ ;
                
                // queue mein push kro
                q.push(ch) ;
                
                while(!q.empty())
                {
                    if(count[q.front()] > 1)
                        q.pop() ;           // repeating character
                        
                    else
                    {
                        // non-repeating character
                        ans.push_back(q.front()) ;
                        break ;
                    }
                }
                
                if(q.empty())       // non-repeating character hai hi nhi queue mein
                    ans.push_back('#') ;
            }
            
            return ans ;
        }

};
