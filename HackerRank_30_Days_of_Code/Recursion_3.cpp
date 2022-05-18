
// https://www.hackerrank.com/challenges/30-recursion/problem?isFullScreen=false

#include <bits/stdc++.h>
using namespace std ;

int factorial(int n) 
{
    if(n < 0)
    {    
        return(-1); /*Wrong value*/      
    }
    
    if(n == 0)
    {   
        return(1);  /*Terminating condition*/    
    }
    
    else    
    {    
        return(n*factorial(n-1));        
    }  

}

int main()
{
    int n ;
    
    cin >> n ;
    
    cout << factorial(n) ;

    return 0 ;
}
