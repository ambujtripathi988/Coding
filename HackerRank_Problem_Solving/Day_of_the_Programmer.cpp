
// https://www.hackerrank.com/challenges/day-of-the-programmer/problem

#include <bits/stdc++.h>

using namespace std ;


int main()
{
    int year ;
    
    cin >> year ;
    
    if (year == 1918) 
    {
        cout << "26" << "." << "09" << "." << year ;
    }


    else if ((year <= 1917 && year % 4 == 0) || (year > 1917 && year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) 
    {
        cout << "12" << "." << "09" << "." << year ; 
    }

    else 
    {
        cout << "13" << "." << "09" << "." << year ;
    }

    return 0 ;
}
