
// https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1

/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
        // your code goes here

        if(head == NULL || head -> next == NULL)
            return head ;
            
        Node* curr = head ;
        Node* prev = NULL ;
        Node* toDel = NULL ;
        unordered_map<int,bool> visit ;
        
        while(curr)
        {
            if(visit[curr -> data])
            {
                toDel = curr ;
                prev -> next = curr -> next ;
                curr = curr -> next ;
                
                delete toDel ;
            }
            
            else
            {
                visit[curr -> data] = true ;
                
                // shifting logic
                prev = curr ;
                curr = curr -> next ;
            } 
        }
        
        return head ;
    }
};
