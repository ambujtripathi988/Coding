
// https://www.hackerrank.com/challenges/find-point/problem?isFullScreen=true

#include <iostream>
using namespace std;

int main() 
{
    int px,py,qx,qy,rx,ry,test;
    
    cin >> test ;
    for(int i = 0; i < test ; i++)
    {
        cin >> px >> py >> qx >> qy ;

        rx = qx + (qx-px) ;
        ry = qy + (qy-py) ;

        cout << rx << " " << ry << endl ;
    }
    
    return 0;
}
