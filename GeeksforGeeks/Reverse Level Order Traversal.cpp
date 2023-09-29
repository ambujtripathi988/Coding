
// https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1

/*   
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
vector<int> reverseLevelOrder(Node *root)
{
    // code here
    
    vector<int> ans;
    
    queue<Node* > q;
    q.push(root);
    Node* temp;
    
    while(!q.empty())
    {   
        temp=q.front();

        if(temp->right)q.push(temp->right);
        if(temp->left)q.push(temp->left);

        ans.push_back(temp->data);
        q.pop();
    }
    
    reverse(ans.begin(),ans.end());
    return ans;
}
