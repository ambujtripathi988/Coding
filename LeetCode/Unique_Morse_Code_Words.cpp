
// https://leetcode.com/problems/unique-morse-code-words/

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) 
    {
        map<char,string> code ;
         
        string arr[26] = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.." };
        
        int inde = 0 ;
        
        for(char i = 'a' ; i <= 'z' ; i++)
        {
            code.insert({i,arr[inde]}) ;
            inde ++ ;
        }
        
        set<string> ans ;
        
        for(int i = 0 ; i < words.size() ; i++)
        {
            string str = words[i] ;
            
            string s = "" ;
            
            for(int j = 0 ; j < str.length() ; j++)
                s += code[str[j]] ;
            
            ans.insert(s) ; 
        }
        
        return ( ans.size() ) ;
    }
};
