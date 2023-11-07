
// https://practice.geeksforgeeks.org/problems/sort-a-linked-list/1

/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/


class Solution{
  private:
    Node* getMid(Node* head)
    {
        Node* slow = head ;
        Node* fast = head -> next ;
        
        while(fast != NULL && fast -> next != NULL)
        {
            slow = slow -> next ;
            fast = fast -> next -> next ;
        }
        
        return slow ;
    }
    
    Node* merge(Node* left , Node* right)
    {
        if(left == NULL)
            return right ;
            
        if(right == NULL)
            return left ;
        
        Node* temp1 = left ;
        Node* temp2 = right ;
        Node* ans = new Node(-1) ;
        Node* mer = ans ;
        
        while(temp1 != NULL && temp2 != NULL)
        {
            if(temp1 -> data < temp2 -> data)
            {
                mer ->  next = temp1 ;
                mer = temp1 ;
                temp1 = temp1 -> next ;
            }
            
            else
            {
                mer ->  next = temp2 ;
                mer = temp2 ;
                temp2 = temp2 -> next ;
            }
        }
        
        while(temp1 != NULL)
        {
            mer ->  next = temp1 ;
            mer = temp1 ;
            temp1 = temp1 -> next ;
        }
        
        while(temp2 != NULL)
        {
            mer ->  next = temp2 ;
            mer = temp2 ;
            temp2 = temp2 -> next ;
        }
        
        ans = ans -> next ;
        
        return ans ;
    }
    
  public:
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) 
    {
        // your code here
        
        if(head == NULL || head -> next == NULL)
            return head ;
            
        Node* mid = getMid(head) ;
        
        Node *left = head ;
        Node* right = mid -> next ;
        
        mid -> next = NULL ;
        
        // recursive calls :
        left = mergeSort(left) ;
        right = mergeSort(right) ;
        
        Node* res = merge(left, right) ;
        
        return res ;
    }
};
