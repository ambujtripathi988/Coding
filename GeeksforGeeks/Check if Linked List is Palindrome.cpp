
// https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
    
  private:
    Node* reverseList(Node* head) {
        if (!head)
            return NULL;
    
        if (!(head->next))
            return head;
    
        Node* prev = NULL;
        Node* curr = head;
        Node* temp = NULL;
    
        while (curr) {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
    
        return prev;
    }
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        if (head == NULL || head->next == NULL)
        return true; // An empty list or single node list is considered a palindrome

        Node* slow = head;
        Node* fast = head;
        Node* prev_slow = NULL;
    
        // Move slow pointer to the middle while advancing fast pointer to the end of the list
        while (fast && fast->next) {
            fast = fast->next->next;
            prev_slow = slow;
            slow = slow->next;
        }
    
        // If the list has odd number of nodes, move slow pointer one step further
        if (fast) {
            slow = slow->next;
        }
    
        prev_slow->next = reverseList(slow);
    
        Node* first_half = head;
        Node* second_half = prev_slow->next;
    
        while (second_half) {
            if (first_half->data != second_half->data)
                return false;
    
            first_half = first_half->next;
            second_half = second_half->next;
        }
    
        return true;
    }
};
