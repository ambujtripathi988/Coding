
// https://www.hackerrank.com/challenges/best-divisor/problem?isFullScreen=false

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long int n ; 
    int digit , sum =0 , position ;
    
    cin >> n ;
    
    int arr_sum[n];
    int arr_num[n];
    arr_num[0] = 1 ;
    
    for(int i=1 ; i<=n ; i++)       // for finding factors
    {
        if(n%(i+1) == 0)
        {
            arr_num[i] = i+1 ;
        }
        
        else 
        {
            arr_num[i] = 0 ;
        }
    }
    
    for(int i=0 ; i<n ; i++)       // for finding sum of digits of a factor
    {
        int temp = arr_num[i];
        
        while(temp > 0)
        {
            digit = temp % 10 ;

            sum = sum + digit ;

            temp /= 10 ;
        }

        arr_sum[i] = sum ;

        sum = 0 ;
    }

    int x = sizeof(arr_sum) / sizeof(arr_sum[0]);

    //int max_num = *max_element(arr_sum, arr_sum + x);
    
    int max_pos=0 ;
    
    for(int i=0 ; i<n ; i++)
    {
        if (arr_num[i]==0)
            continue;
        
        else if(arr_sum[i] > arr_sum[max_pos])
            max_pos = i ;
        
        else if(arr_sum[i] == arr_sum[max_pos])
        {
            if (arr_num[i]<arr_num[max_pos])
                max_pos = i;
        }
        
        //cout<<arr_num[i]<<"    "<<arr_sum[i]<<endl;
        
    }

    cout << arr_num[max_pos] << endl ;

    return 0;
}

