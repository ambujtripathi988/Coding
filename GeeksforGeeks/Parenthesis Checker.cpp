
// https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1?page=1&company[]=Amazon&category[]=Strings&sortBy=submissions

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        
        stack<char> st ;

        for(int i=0; i<x.length(); i++){

            char c=x[i] ;

            if( !st.empty() && c=='}' && st.top()=='{'){

                st.pop();

            }

            else if(!st.empty() && c==']' && st.top()=='['){

                st.pop();

            }

            else if(!st.empty() && c==')' && st.top()=='('){

                st.pop();

            }
            
            else{

                st.push(c);

            }

        }

        if(st.empty()) return true;

        return false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends
