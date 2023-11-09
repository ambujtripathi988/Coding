
// https://practice.geeksforgeeks.org/problems/insert-an-element-at-the-bottom-of-a-stack/1?page=1&sortBy=latest

//User function Template for C++

class Solution{
private:
    void insertAtBottom1(stack<int> &s, int element)
    {
        // base case
        if(s.empty())
        {
            s.push(element) ;
            return ;
        }
        
        int num = s.top() ;
        s.pop() ;
        
        // recursive call 
        insertAtBottom1(s, element) ;
        
        s.push(num) ;
    }
    
public:
    stack<int> insertAtBottom(stack<int> St,int X)
    {
        insertAtBottom1(St, X) ;
        
        return St ;
    }
};
