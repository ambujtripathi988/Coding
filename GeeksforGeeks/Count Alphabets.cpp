
// https://practice.geeksforgeeks.org/problems/count-alphabets3649/1

int Count(string str)
{    
    int count = 0 ;
    
    for(int i = 0 ; i < str.length() ; i++)
        if(isalpha(str[i]))
            count ++ ;
            
    return count ;
}
