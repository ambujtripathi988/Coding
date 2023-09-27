
// https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1

/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    private:
    
    Node* addTwoNumbers(Node* l1, Node* l2)
    {
        int carry = 0;
        Node* result = nullptr;
        Node* tail = nullptr;

        while (l1 || l2 || carry)
        {
            int sum = carry;
            if (l1)
            {
                sum += l1->data;
                l1 = l1->next;
            }
            if (l2)
            {
                sum += l2->data;
                l2 = l2->next;
            }

            carry = sum / 10;
            sum %= 10;

            Node* newNode = new Node(sum);

            if (!result)
            {
                result = newNode;
                tail = newNode;
            }
            else
            {
                tail->next = newNode;
                tail = newNode;
            }
        }

        return result;
    }
    
    Node* reverseList(Node* head) 
    {
        if(!head)
            return NULL ;
        
        if(!(head -> next))
            return head ;
            
        Node *prev = NULL , *curr = head , *temp = NULL ; 

        while(curr)
        {
            temp = curr -> next ;

            curr -> next = prev ;

            prev = curr ;

            curr = temp ;
        }

        return prev ;
    }
    
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        
        first = reverseList(first);
        second = reverseList(second);
    
        Node* ans = addTwoNumbers(first, second);
    
        ans = reverseList(ans);
    
        return ans;
    }
};
