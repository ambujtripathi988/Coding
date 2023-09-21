
// https://practice.geeksforgeeks.org/problems/44bb5287b98797782162ffe3d2201621f6343a4b/1

/*struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
    private:
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
    
    public:
     //Function to find first node if the linked list has a loop.
    int findFirstNode(Node* head)
    {
        // your code here
        if(head == NULL || head -> next == NULL)
            return -1 ;

        Node *intersect = FloydDetectLoop(head) ;

        if(intersect == NULL)
            return -1 ;

        Node *slow = head ;

        while(slow != intersect)
        {
            slow = slow -> next ;
            intersect = intersect -> next ;
        }

        return slow -> data ;
    }
};
