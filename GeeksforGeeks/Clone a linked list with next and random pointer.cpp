
// https://practice.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1

class Solution
{
    private:
    void insertAtEnd(Node* &head , Node* &tail , int data)
    {
        Node* newNode = new Node(data) ;
        
        if(head == NULL)            // empty node
        {
            head = newNode ;
            tail = newNode ;
            return ;
        }
        
        else
        {
            tail -> next = newNode ;
            
            // shifting 
            tail = newNode ;
        }
    }
    
    public:
    Node *copyList(Node *head)
    {
        //Write your code here
        
        // step 1 : create a clone list
        Node* cloneHead = NULL ;
        Node* cloneTail = NULL ;
        Node* temp = head ;
        
        while(temp != NULL)
        {
            insertAtEnd(cloneHead, cloneTail, temp -> data) ;
            
            temp = temp -> next ;
        }
        
        // step 2 : create a map 
        unordered_map<Node*,Node*> map ;
        
        Node* originalNode = head ;
        Node* cloneNode = cloneHead ;
        
        while(originalNode != NULL)
        {
            map[originalNode] = cloneNode ;
            
            // iteration
            originalNode = originalNode -> next ;
            cloneNode = cloneNode -> next ;
        }
        
        originalNode = head ;
        cloneNode = cloneHead ;
        
        while(originalNode != NULL)
        {
            cloneNode -> arb = map[originalNode -> arb] ;
            
            // iteration
            originalNode = originalNode -> next ;
            cloneNode = cloneNode -> next ;
        }
        
        return cloneHead ;
    }
};
