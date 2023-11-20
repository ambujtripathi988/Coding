
// https://practice.geeksforgeeks.org/problems/merge-two-bst-s/1

/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution
{
    private:
    void inorder(Node* root, vector<int> &ans)
    {
        // base case
        if(root == NULL)
            return ;
            
        inorder(root -> left, ans) ;
        ans.push_back(root -> data) ;
        inorder(root -> right, ans) ;
    }
    
    void mergeArr(int i, int j, vector<int> &arr1, vector<int> &arr2, vector<int> &in)
    {
        // initializations
        int n = arr1.size(), m = arr2.size();
    
        while (i < n && j < m) 
        {
            if (arr1[i] <= arr2[j])
                in.push_back(arr1[i++]) ;
            else
                in.push_back(arr2[j++]); 
        }
    
        // If there are remaining elements in arr1, add them to in
        while (i < n)
            in.push_back(arr1[i++]) ;
    
        // If there are remaining elements in arr2, add them to in
        while (j < m)
            in.push_back(arr2[j++]); 
    }

    public:
    //Function to return a list of integers denoting the node 
    //values of both the BST in a sorted order.
    vector<int> merge(Node *root1, Node *root2)
    {
        // initializations needed
        vector<int> arr1 ;
        vector<int> arr2 ;
        vector<int> in ;
        
        // finding inorder of both BSTs
        inorder(root1, arr1) ;
        inorder(root2, arr2) ;
        
        // merge inorder of two arrays
        mergeArr(0 , 0, arr1, arr2, in) ;
        
        return in ;
    }
};
