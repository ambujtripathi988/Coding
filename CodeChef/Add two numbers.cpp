
// https://www.codechef.com/submit/FLOW001

#include <bits/stdc++.h> 

using namespace std;

int main() 
{
	// Read the number of test cases.
	int choice ,a,b,sum;
	cin >> choice ;
	int arr[choice];
	
	for(int i = 0 ; i < choice ; i++)
	{
	    cin >> a >> b ;
	    sum = a+b;
	    arr[i] = sum ;
	}
	
	for(int i = 0 ; i < choice ; i++)
	{
	    cout << arr[i] << endl ;
	}
	

	return 0;
}
