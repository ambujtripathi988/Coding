
// https://www.hackerrank.com/challenges/making-anagrams/problem?isFullScreen=false

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    string str1 , str2 ;

    cin >> str1 >> str2 ;

    int arr1[26] = {0} ;

    // int arr2[26] = {0} ;

    for(int i = 0 ; i < str1.length() ; i++)
    {
        arr1[int(str1[i])-97] ++ ;
    }

    for(int i = 0 ; i < str2.length() ; i++)
    {
        arr1[int(str2[i])-97] -- ;
    }

    // int count = 0 , diff = 0 ;

    int sum = 0 ;
    
    for(int i = 0 ; i < 26 ; i++)
    {
        sum += abs(arr1[i]) ;
    }

    // cout << ( ( (str1.length()) + (str2.length()) ) - (count + diff) ) << endl ;

    cout << sum << endl ;

    return 0 ;
}
