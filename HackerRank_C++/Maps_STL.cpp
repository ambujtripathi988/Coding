
// https://www.hackerrank.com/challenges/cpp-maps/problem?isFullScreen=false

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main() 
{
    int q, type; 
    
    cin >> q; 
    
    map<string,int> clas ; 
    string name;
    
    for (int i=0, mark; i<q; ++i)
    {
        cin >> type >> name;
        
        if (type == 1)
        {
            cin >> mark;
            clas[name] += mark;
        }
        
        else if (type == 2)
        {
            clas.erase(name);
        }
        
        else
        {
            cout << clas[name] << endl ;
        }
        
    }
    
    return 0;
}
