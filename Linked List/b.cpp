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
void push(node* &head, int val){
    node* newNode=new node(val);
    if(head==NULL){
        head=newNode;
        return;
    }
    node* temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    return;
    
}
void deleteN(node* &head, int val){
    if(head==NULL){
        return;
    }
    node* temp=head, *prev=NULL;
    int cnt=0;
    while (temp->next!=NULL)
    {
        cnt++;
        if(temp->data==val){
            prev->next=temp->next;
            delete temp;
            return;
        }
        prev=temp;
        temp=temp->next;
    }
    if(temp->data==val){
        prev->next=temp->next;
        delete temp;
        return;
    } 
}
void display(node* head){
    if(head==NULL) return;
    while (head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;

    
}
int main(){
    node* head=NULL;
    push(head, 20);
    push(head, 25);
    push(head, 70);
    push(head, 10);
    push(head, 350);
    display(head);
    deleteN(head, 350);
    display(head);
}