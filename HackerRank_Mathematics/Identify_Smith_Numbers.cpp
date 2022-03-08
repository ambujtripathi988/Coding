
// https://www.hackerrank.com/challenges/identify-smith-numbers/problem?h_r=profile

#include <bits/stdc++.h> 
using namespace std;

void primeFactors(int n , vector<int> &primes , int &count)  
{   
    while (n % 2 == 0)  
    {  
        // cout << 2 << " ";

        primes.push_back(2) ;
        
        count ++ ;

        n = n/2;  
    }

   for (int i = 3; i <= sqrt(n); i = i + 2)  
   { 
        while (n % i == 0)     
        {  
            // cout << i << " ";
            
            primes.push_back(i) ;
            
            count ++ ;
            
            n = n/i;  
         
        }  
    }
    
    if (n > 2)
    {
        primes.push_back(n) ;
        
        count ++ ;
    }  

        //cout << n << " ";  
}  

int main()  
{  

    int n , count = 0 , digit , digit_prime , sum_digits=0 , sum_digits_primes = 0 ,sum = 0  ; 
    cin>>n; 

    vector<int> primes ;

    primeFactors(n,primes,count) ; 
    
    int x ;

    // cout << "No of factors : "<< count << endl ;

    for(int i = 0 ; i < count ; i++ )
    {
        
        // cout << primes[i] << " " ;

        x= primes[i] ;

        while(x > 0)
        {
            digit_prime = x % 10 ;
            
            x /= 10 ;
            
            sum_digits_primes += digit_prime ;
        }
    } 

    int m = n ;
    
    while(m > 0)
    {
        digit = m % 10 ;
        
        m /= 10 ;
        
        sum_digits += digit ;
    }

    // cout << "\nSum of digits : " << sum_digits << endl << "Sum of prime factors : " << sum_digits_primes << endl ;

    if(count >= 2 )
    {
        if(sum_digits == sum_digits_primes)
        {
            cout << "1" << endl ;
        }

        else
        {
            cout << "0" << endl ;
        }
    }

    else
    {
        cout << "0" << endl ;
    }
    
    return 0;  
} 
