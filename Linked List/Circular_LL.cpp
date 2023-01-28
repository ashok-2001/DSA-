#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertionHead(node* &head, int val){
    node* new_node=new node(val);
    if(head==NULL){
        new_node->next=new_node;
        head=new_node;
        return;
    }
    node* temp=head;
    new_node->next=temp;
    while (temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=new_node;
    head=new_node;
    return;
    
}
void insertATtail(node* &head, int val){
    node* new_node2=new node(val);
    if(head==NULL){
        insertionHead(head, val);
        return;
    }
    node* temp=head;
    // new_node2->next=temp;
    while (temp->next!=head)
    {
        temp=temp->next;
    }
    new_node2->next=head;
    temp->next=new_node2;
    return;

}
void display(node* head){
    if(head==NULL){
        cout<<"Empty List";
        return;
    }
    node* temp=head;
    while (temp->next!=head)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}
int main(){
    node* head=NULL;
    insertATtail(head,3);
    insertionHead(head, 67);
    insertionHead(head, 89);
    insertionHead(head, 32);
    display(head);
    insertATtail(head, 54);
    insertATtail(head, 89);
    display(head);

}