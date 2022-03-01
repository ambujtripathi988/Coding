
// https://www.hackerrank.com/challenges/grading/problem

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n ;

    cin >> n ;

    for (int i = 0; i < n; i++)
    {
        int grade = 0 ;

        cin >> grade ;

        if(grade < 38)
        {
            cout << grade << endl ;
        }

        else
        {
            if(grade % 5 == 3)
            {
                grade += 2 ;
                cout << grade << endl ;
            }

            else if(grade % 5 == 4 )
            {
                grade ++ ;
                cout << grade << endl ;
            }

            else
            {
                cout << grade << endl ;
            }
        }
    }

    return 0;
}
