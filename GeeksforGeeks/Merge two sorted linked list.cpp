
// https://practice.geeksforgeeks.org/problems/merge-two-sorted-linked-lists/1

/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to merge two sorted linked list.
Node* sortedMerge(Node* first, Node* second)  
{  
    if (first == NULL)
        return second ;
        
    if (second == NULL) 
        return first ;
        
    Node* result;  // The merged list
    
    // Initialize the result with the smaller head
    if (first->data < second->data) {
        result = first;
        first = first->next;
    } else {
        result = second;
        second = second->next;
    }
    
    Node* current = result;
    
    // Merge the two lists
    while (first != NULL && second != NULL) {
        if (first->data < second->data) {
            current->next = first;
            current = first;
            first = first->next;
        } else {
            current->next = second;
            current = second;
            second = second->next;
        }
    }
    
    // Append remaining nodes if any
    if (first != NULL)
        current->next = first;
    else
        current->next = second;
        
    return result;
}  
