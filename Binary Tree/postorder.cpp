#include<bits/stdc++.h>
void post(Node* root, vector<int> &v){
    if(root==NULL) return;
    post(root->left,v);
    post(root->right,v);
    v.push_back(root->data);
}
//Function to return a list containing the postorder traversal of the tree.
vector <int> postOrder(Node* root)
{
    vector<int> v;
    post(root,v);
    return v;
  // Your code here
}
