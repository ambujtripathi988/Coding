
// https://www.codechef.com/submit/FLOW006

#include <iostream>
using namespace std;

int main() 
{
	int t , no ,digit;
	
	cin >> t ;
	int sum = 0;
	int numbers[t];
	 
	 for(int i = 0 ; i < t ; i++)
	 {
	     cin >> no ;
	     
	     while(no>0)
	     {
	         digs = no % 10 ;
	         no /= 10 ;
	         sum = sum + digit ;
	         
	     }
	     
	     numbers[i] = sum ;
	     
	     sum = 0 ;
	 }
	 
	 for(int i = 0 ; i < t ; i++)
	 {
	     cout << numbers[i] << endl ;
	 }
	
	return 0;
}
