
// https://practice.geeksforgeeks.org/problems/reorder-list/1

/* Following is the Linked list node structure */

/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution{ 
public:
    void reorderList(Node* head) 
    {
        // Your code here
        
        Node* temp=head;

        deque<int>q;

        while(temp)
        {

            q.push_front(temp->data);

            temp=temp->next;

        }

        bool flag=false;

        temp=head;

        while(!q.empty()){

            if(flag)
            {

                temp->data=q.front();

                q.pop_front();

                flag=false;

            }

            else
            {

                temp->data=q.back();

                q.pop_back();

                flag=true;

            }

            temp=temp->next;

        }
    }
};