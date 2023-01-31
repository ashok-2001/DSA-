
class Solution {
  public:
    void InorderTr(Node* root, vector<int>& v){
        if(root==NULL) return;
        
        InorderTr(root->left, v);
        v.push_back(root->data);
        InorderTr(root->right, v);
    }
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int> v;
        InorderTr(root, v);
        return v;
        
    }
};