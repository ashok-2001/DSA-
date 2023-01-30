void preorderTr(Node* root, vector<int>& v){
    if(root==NULL) return;
    
    v.push_back(root->data);
    preorderTr(root->left,v);
    preorderTr(root->right,v);
}
//Function to return a list containing the preorder traversal of the tree.
vector <int> preorder(Node* root)
{
    // if(root==NULL) return
    vector<int> v;
    preorderTr(root,v);
    return v;
  // Your code here
}