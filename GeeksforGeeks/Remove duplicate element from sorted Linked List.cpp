
// https://practice.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
    // your code goes here
    
    if(head == NULL || head -> next == NULL)    
        return head ;
        
    Node* curr = head ;
    Node* toDel = NULL ;
    
    while(curr)
    {
        if(curr -> next && curr -> next -> data == curr -> data)
        {
            toDel = curr -> next ;
            curr -> next = toDel -> next ;
            
            delete toDel ;
        }
        
        else
            curr = curr -> next ;
    }
    
    return head ;
}
