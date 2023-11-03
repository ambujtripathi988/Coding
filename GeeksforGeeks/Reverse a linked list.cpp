
// https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1

/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        
        if(!head || head -> next == NULL)
            return head ;
            
        struct Node *curr = head ;
        struct Node *forward = head -> next ;
        struct Node *prev = NULL ;
        
        while(curr)
        {
            forward = curr -> next ;
            curr -> next = prev ;
            
            // traversal 
            prev = curr ;
            curr = forward ;
        }
        
        return prev ;
    }
    
};
