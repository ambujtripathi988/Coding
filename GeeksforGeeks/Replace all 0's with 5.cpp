
// https://practice.geeksforgeeks.org/problems/replace-all-0s-with-5/1?page=2&category[]=Arrays&sortBy=difficulty

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) 
{
    int num = 0 ;
    
    vector<int> vect ;
    
    while(n > 0)
    {
        int digit = n % 10 ;
        
        n /= 10 ;
        
        if(digit == 0)
            digit = 5 ;
            
        vect.push_back(digit) ;
    }
    
    reverse(vect.begin() , vect.end()) ;
    
    int s = 0 ;
    
    for(int i = 0 ; i < vect.size() ; i++)
    {
        s *= 10 ;
        s += vect[i] ;
    }
    
    return s ;
}
