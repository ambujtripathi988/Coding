
// https://practice.geeksforgeeks.org/problems/reverse-a-stack/1

class Solution{
private:
    void rev(stack<int> &s)
    {
        // base case 
        if(s.empty())
            return ;
            
        int num = s.top() ;
        s.pop() ;
        
        // recursive call 
        rev(s) ;
        
        insertAtBottom(s, num) ;
    }
    
    void insertAtBottom(stack<int> &s, int element)
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
        insertAtBottom(s, element) ;
        
        s.push(num) ;
    }
    
public:
    void Reverse(stack<int> &s)
    {
        rev(s) ;    
    }
};
