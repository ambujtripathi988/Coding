
// https://practice.geeksforgeeks.org/problems/sort-a-stack/1

/*The structure of the class is
class SortedStack{
public:
    stack<int> s;
    void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */

void insertAt(stack<int> &s, int num)
{
    // base case 
    if(s.empty() || s.top() < num)
    {
        s.push(num) ;
        return ;
    }
    
    int x = s.top() ;
    s.pop() ;
    
    // recursive call
    insertAt(s, num) ;
    
    s.push(x) ;
}

void SortedStack :: sort()
{
    // base case
    if(s.empty())
        return ; 
        
    int num = s.top() ;
    s.pop() ;
    
    // recursive call 
    sort() ;
    
    insertAt(s, num) ;
}  
