
// https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1

/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution
{
    private :
    
    Node *FloydDetectLoop(Node *head)
    {
        if(head == NULL || head -> next == NULL)
            return NULL ;
    
        Node *slow = head ;
        Node *fast = head ;
    
        while(fast && fast -> next)
        {
            fast = fast -> next ;
            fast = fast -> next ;
            slow = slow -> next ;
    
            if(slow == fast)
                return slow ;
        }
    
        return NULL ;
    }
    
    Node *findFirstNode(Node* head)
    {
        if(head == NULL || head -> next == NULL)
            return NULL ;
    
        Node *intersect = FloydDetectLoop(head) ;
    
        if(intersect == NULL)
            return NULL ;
    
        Node *slow = head ;
    
        while(slow != intersect)
        {
            slow = slow -> next ;
            intersect = intersect -> next ;
        }
    
        return slow ;
    }
    
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        
        if(head == NULL)
            return ;

        Node* startOfLoop = findFirstNode(head) ;
        Node* temp = startOfLoop ;
        
        if(startOfLoop == NULL)
            return ;
    
        while(temp -> next != startOfLoop)  
            temp = temp -> next ;
    
        temp -> next = NULL ;
    
        return ;
    }
};
