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
void insertATtail(node* &head, int val){
    node* new_node=new node(val);
    if(head==NULL){
        head=new_node;
        return;
    }
    node* temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new_node;
}
void insertAThead(node* &head, int val){
    node* new_data2=new node(val);
    if(head==NULL){
        head=new_data2;
        return;
    }
    new_data2->next=head;
    head=new_data2;
}
bool searching(node* head, int key){
    // if(head==NULL){
    //     cout<<"Empty List"<<endl;
    //     return;
    // }
    while (head!=NULL)
    {
        if(head->data==key){
            return true;
        }
        head=head->next;
    }
    // if(head->data==key){
    //     return true;
    // }
    return false;
    
}
void display(node* head){
    if(head==NULL){
        cout<<"Empty Linked List"<<endl;
        return;
    }
    while(head->next!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<head->data<<endl;;
    
}
int main(){
    node* head=NULL;
    insertATtail(head, 21);
    insertATtail(head, 30);
    insertATtail(head, 7);
    insertAThead(head, 211);
    display(head);
    if(searching(head, 7))
    {   
        cout<<"found in the list "<<endl;
    }
    else{
        cout<<"Not Found "<<endl;
    }
}