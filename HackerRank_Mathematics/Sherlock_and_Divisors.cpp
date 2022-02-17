
// https://www.hackerrank.com/challenges/sherlock-and-divisors/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int test ;

    cin >> test ;

    for(int i = 0 ; i<test ; i++)
    {
        long long int num , count = 0 ;
        cin >> num ;
        // vector <int> arr ;
        
        //if(num %2 == 0) {}

        for(int j = 1 ; j <= sqrt(num) ; j++)
        {
            if((num%j==0) )
            {
               if(j%2==0){
                count ++ ;
               }
                //cout << "first divisor : " << j <<"      count : " << count<< endl ;
                
                if((num/j)%2 == 0 && (num/j) != j)
                    {
                        count ++ ;
                        //cout << "other corresponding divisor : "<<(num/j) <<"      count : " << count<<endl;
                    }
                
            }
        }

        //int x = sizeof(arr) / sizeof(arr[0]);

        //if ( (count!=0) || (num==0) )
        //    count += 1;
        cout << count << endl ;
    }

    return 0;
}
