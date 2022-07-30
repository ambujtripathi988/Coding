
// https://leetcode.com/problems/check-if-the-sentence-is-pangram/

class Solution {
public:
    bool checkIfPangram(string sentence)  
    {
        int arr[26] = {0} ;
        
        for(int i = 0 ; i < sentence.length() ; i++)
        {
            arr[sentence[i] - 'a'] = 1 ;
        }
        
        int sum = 0 ;
        
        for(int i = 0 ; i < 26 ; i++)
        {
            sum += arr[i] ;
        }
        
        if(sum == 26)
        {
            return true ;
        }
        
        else
        {
            return false ;
        }
    }
};
