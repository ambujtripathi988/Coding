
// https://leetcode.com/problems/ransom-note/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    { 
        int arr1[26] = {0} ;
        int arr2[26] = {0} ;

        int flag = 0 ; 

        for(int i = 0 ; i < magazine.length() ; i++)
        {
            arr1[magazine[i] - 'a'] ++ ;
        }

        for(int i = 0 ; i < ransomNote.length() ; i++)
        {
            arr2[ransomNote[i] - 'a'] ++ ;
        }

        for(int i = 0 ; i < 26 ; i++)
        {
            if(arr2[i] <= arr1[i])
            {
                continue ;
            }

            else
            {
                flag = 1 ;

                break ;
            }
        }

        if(flag)
            return false ;

        else
            return true ;
    }
};
