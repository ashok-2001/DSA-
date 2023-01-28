#include<bits/stdc++.h>
using namespace std;
class BTree{
    public:
    int data;
    BTree* left;
    BTree* right;
    BTree(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
        //       5
        //     /   \
        //    4     7
        //  /  \   /  \
        // 3   2  8    9
void preorder(BTree* root){
    if(root==NULL){
        return;
    }
    BTree* temp=root;
    cout<<temp->data<<" ";
    preorder(temp->left);
    preorder(temp->right);
}
void inorder(BTree* root){
    if(root==NULL){
        return;
    }
    BTree* temp=root;
    preorder(temp->left);
    cout<<temp->data<<" ";
    preorder(temp->right);
}
void postorder(BTree* root){
    if(root==NULL){
        return;
    }
    BTree* temp=root;
    preorder(temp->left);
    preorder(temp->right);
    cout<<temp->data<<" ";
}

int search(int inOarr[], int start, int end, int curr){
    for (int i = start; i <=end; i++)
    {
        if(curr==inOarr[i]) return i;
        
    }
    return -1;
}
BTree* findBinaryTree(int inorderArr[], int preorderArr[], int start, int end){
    static int idx=0;
    if(start>end) return NULL;
    int curr=preorderArr[idx];
    idx++;
    int pos=search(inorderArr,start,end,curr);
    BTree* newNode=new BTree(curr);
    newNode->left=findBinaryTree(inorderArr, preorderArr, start, pos-1);
    newNode->right=findBinaryTree(inorderArr, preorderArr, pos+1, end);
    return newNode;
}

int main(){
    // int pre[]={5,4,3,2,7,8,9};
    // int In[]={3,4,2,5,8,7,9};
    // BTree* temp=findBinaryTree(In, pre,0,6);
    // inorder(temp);
    // cout<<endl;
    // preorder(temp);
    // cout<<endl;
    // BTree* root=NULL;
    struct BTree* root=new BTree(5);
    // BTree* node1=new BTree(4);
    // BTree* node2=new BTree(7);
    // BTree* node3=new BTree(3);
    // BTree* node4=new BTree(2);
    // BTree* node5=new BTree(8);
    // BTree* node6=new BTree(9);
    root->left=new BTree(4);
    root->right=new BTree(7);
    root->left->left=new BTree(3);
    root->left->right=new BTree(2);
    root->right->left=new BTree(8);
    root->right->right=new BTree(9);
    // // cout<<root->left->left->data<<" ";
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;


}