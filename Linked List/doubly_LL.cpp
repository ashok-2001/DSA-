#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
void insertAThead(node* &head, int val){
    node* new_node=new node(val);
    if(head==NULL){
        head=new_node;
        return;
    }
    new_node->next=head;
    if(head!=NULL){
        head->prev=new_node;
    }
    head=new_node;
    return;
}
void insertATtail(node* &head, int val){
    node* new_node2=new node(val);
    if(head==NULL){
        head=new_node2;
        return;
    }
    node* temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
        /* code */
    }
    new_node2->next=NULL;
    new_node2->prev=temp;
    temp->next=new_node2;
    return;
    
}
void insertAfter(node* &head, int key, int val){
    node* new_node3=new node(val);
    if(head==NULL){
        return;
    }
    node* temp=head;
    while (temp->next!=NULL)
    {
        if(temp->data==key){
            new_node3->next=temp->next;
            new_node3->prev=temp;
            temp->next=new_node3;
            return;
        }
        temp=temp->next;
        /* code */
    }
    if(temp->data==key){
        new_node3->next=temp->next;
        new_node3->prev=temp;
        temp->next=new_node3;
        return;
    }
    return;
}
void insertBefore(node* head, int key, int val){
    node* new_node4=new node(val);
    if(head==NULL){
        return;
    }
    node* temp=head;
    while (temp->next!=NULL)
    {
        if(temp->data==key && temp->prev!=NULL){
            new_node4->next=temp;
            new_node4->prev=temp->prev;
            temp->prev->next=new_node4;
            temp->prev=new_node4;
            return;
        }
        if(temp->data==key && temp->prev==NULL){
            new_node4->next=temp;
            new_node4->prev=NULL;
            head=new_node4;
            temp->prev=new_node4;
            return;
        }
        temp=temp->next;
    }
    if(temp->data==key && temp->prev==NULL){
        new_node4->next=temp;
        new_node4->prev=NULL;
        head=new_node4;
        temp->prev=new_node4;
        return;
    }
    if(temp->data==key && temp->prev!=NULL){
        new_node4->next=temp;
        new_node4->prev=temp->prev;
        temp->prev->next=new_node4;
        temp->prev=new_node4;
        return;
    }
    return;
}
void deleteHead(node* &head){
    if(head==NULL){
        return;
    }
    node* temp=NULL;
    if(head->next!=NULL){
        temp=head;
        head=head->next;
        head->prev=NULL;
        delete temp;
        return;
    }
    temp=head;
    delete temp;
    return;
}
void deleteTail(node* &head){
    if(head==NULL){
        return;
    }
    node* temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
        /* code */
    }
    temp->prev->next=NULL;
    delete temp;
    return;
}
void delete_after(node* &head, int key){
    if(head==NULL){
        return;
    }
    node* temp=head;
    while (key!=temp->data)
    {
        temp=temp->next;
    }
    if(temp->next!=NULL && key==temp->data){
        if(temp->prev==NULL){
            temp->next->prev=NULL;
            head=temp->next;
            delete temp;
            return;
        }
        temp->prev->next=temp->next;
        delete(temp);
        return;
    }else if(temp->next==NULL && key==temp->data){
        if(temp->prev==NULL){
            delete temp;
            return;
        }
        else{
            temp->prev->next=NULL;
            delete temp;
            return;
        }
    }else{
        return;
    }
    
}

void display(node* head)
{
    if(head==NULL)
    {
        cout<<"Empty Linked List"<<endl;
        return;
    }
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main(){
    node* head=NULL;
    insertAThead(head, 80);
    insertAThead(head, 33);
    insertAThead(head, 45);
    display(head);
    insertATtail(head, 77);
    insertATtail(head, 54);
    insertATtail(head, 32);
    display(head);
    insertAfter(head, 33, 67);
    display(head);
    insertBefore(head, 80, 76);
    display(head);
    // deleteHead(head);
    // display(head);
    // deleteTail(head);
    // display(head);
    // delete_after(head, 33);
    // display(head);
}