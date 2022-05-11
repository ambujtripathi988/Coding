
// https://www.hackerrank.com/challenges/30-data-types/problem?isFullScreen=false

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std ;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    int i1 ;
    double d1 ;
    string s1 ;
    
    cin >> i1 >> d1 ;
    
    cin.ignore() ;          // ignore end of line character
    
    getline(cin , s1) ;     // gets input of a line without #include<string> because of cin.ignore() 
    
    cout << i+i1 << endl ;
    
    cout << fixed << setprecision(1) << d+d1 << endl ;
    
    // s.append(s1) ;
    
    cout << s << s1 << endl ;

    return 0;
}
