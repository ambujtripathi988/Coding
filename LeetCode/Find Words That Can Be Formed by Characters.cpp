
// https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) 
    {
        sort(chars.begin(),chars.end()) ;
        
        int arr[26] = {0} ;
        
        for(int i = 0 ; i < chars.length() ; i++)
            arr[chars[i] - 'a'] ++ ;
        
        int sum = 0 ;
        
        for(int i = 0 ; i < words.size() ; i++)
        {
            int arr2[26] ;
            
            for(int k = 0 ; k < 26 ; k++)
                arr2[k] = arr[k] ;
            
            bool flag = false ;
            
            for(int j = 0 ; j < words[i].length() ; j++)
            {
                if(--arr2[words[i][j] - 'a' ] < 0)
                {
                    flag = true ;
                    break ;
                }
            }
            
            if(!flag)
                sum += words[i].length() ;
        }
        
        return sum ;
    }
};
