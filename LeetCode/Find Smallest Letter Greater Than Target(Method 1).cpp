
// https://leetcode.com/problems/find-smallest-letter-greater-than-target/

// Method 1 : Lineat Search O(N)

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) 
    {
        char ch = 'S' ;
        
        int diff = INT_MAX ;
        
        for(int i = 0 ; i < letters.size() ; i++)
        {    
            if(abs(letters[i] - target) < diff && abs(letters[i] - target) > 0 && letters[i] > target)
            {
                ch = letters[i] ;
                diff = abs(letters[i] - target) ;
            }
        }
        
        if(ch == 'S')
            return letters[0] ;
        
        return ch ;
    }
};
