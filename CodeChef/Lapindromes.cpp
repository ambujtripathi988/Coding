
// https://www.codechef.com/LRNDSA01/problems/LAPIN#:~:text=Problem,character%20and%20check%20for%20lapindrome.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int test ;
	
	cin >> test ;
	
	while(test--)
	{
	    string str ;
	    
	    cin >> str ;
	    
	    int x = str.length() ;
	    
	    int count_alpha1[26] = {0} ;
	    
	    int count_alpha2[26] = {0} ;
	    
	    if(x%2 == 0)
	    {
    	    for(int i = 0 ; i < x/2 ; i++)          // first half
    	    {
    	        count_alpha1[str[i] - 'a'] ++ ;
    	    }
    	    
    	    for(int i = ((x/2)) ; i < x ; i++)     // second half
    	    {
    	        count_alpha2[str[i] - 'a'] ++ ;
    	    }
	    }
	    
	    else
	    {
	        for(int i = 0 ; i < x/2 ; i++)          // first half
    	    {
    	        count_alpha1[str[i] - 'a'] ++ ;
    	    }
    	    
    	    for(int i = ((x/2) +1) ; i < x ; i++)     // second half
    	    {
    	        count_alpha2[str[i] - 'a'] ++ ;
    	    }

	    }
        
        /*
		cout << "count_alpha1 : " ;

		for(int i = 0 ; i < 26 ; i++)
		{
			cout << count_alpha1[i] << " " ;
		}

		cout << endl << "count_alpha2 : " ;
	    
		for(int i = 0 ; i < 26 ; i++)
		{
			cout << count_alpha2[i] << " " ;
		}

		cout << endl ;
		*/

	    int flag = 0 ;
	    
	    for(int i = 0 ; i < 26 ; i++)
	    {
	        if(count_alpha1[i] != count_alpha2[i])
	        {
	            //cout << "i is : "<< i << endl ; 
				//cout << count_alpha1[i] << "  "<< count_alpha2[i] << endl ;
				
				flag = 1 ;
	            
	            break ;
	        }
	    }
	    
	    if(flag == 0)
	    {
	        cout << "YES" << endl ;
	    }
	    
	    else
	    {
	        cout << "NO" << endl ;
	    }
	}
	
	return 0;
}
