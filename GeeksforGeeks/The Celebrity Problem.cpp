
// https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1

//User function template for C++

class Solution 
{
    private:
    bool knows(vector<vector<int> >& M , int a , int b , int n)
    {
        if(M[a][b] == 1)
            return true ;
            
        return false ;
    }
    
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        
        stack<int> s ;
        
        // push all elements in the stack
        for(int i = 0 ; i <  n ; i++)
            s.push(i) ;
            
        // step 1 : take two elements at a time and check
        while(s.size() > 1)
        {
            int a = s.top() ;
            s.pop() ;
            
            int b = s.top() ;
            s.pop() ;
            
            if(knows(M,a,b,n))
                s.push(b) ;
                
            else
                s.push(a) ;
        }
        
        // potential candidate is top of the stack after comming out the loop
        int ans = s.top() ;
        
        // wo kisi ko to nhi jaanta ye check krna padega
        bool rowCheck = false ;
        int zero =  0 ;
        
        for(int i = 0 ; i < n ; i++)
            if(M[ans][i] == 0)
                zero ++ ;
                
        if(zero == n)
            rowCheck = true ;           // matlab wo kisi ko bhi nhi jaanta(celebrity kisi ko bhi nhi jaanta)
            
        // sabhi usko jaante hain ki nhi
        bool colCheck = false ;
        int one = 0 ;
        
        for(int i = 0 ; i < n ; i++)
            if(M[i][ans] == 1)
                one ++ ;
                
        if(one == n-1)
            colCheck = true ;           // matlab sabhi log usko jaante hain(celebrity ko sabhi log jaante hain)
            
        if(rowCheck && colCheck)
            return ans ;
            
        return -1 ;
    } 
};
