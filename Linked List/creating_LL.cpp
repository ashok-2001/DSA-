#include<bits/stdc++.h>
using namespace std;
// template <class T>
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
    // node* temp=head;
    if(head==NULL){
        head=new_node;
        return;
    }
    while (head->next!=NULL)
    {
        head=head->next;
    }
    head->next=new_node;
    return;
}
void insertAThead(node* &head, int val){
    node* new_node2=new node(val);
    if(head==NULL){
        head=new_node2;
        return;
    }
    new_node2->next=head;
    head=new_node2;
    return;
}
// GFG Method

// void insertAfter(node* head, int key, int val){
//     node* new3=new node(val);
//     if(head==NULL){
//         return;
//     }
//     if(head->data==key){
//         new3->next=head->next;
//         head->next=new3;
//         return;
//     }
//     while(head->data!=key)
//     {
//         head=head->next;
//         if(head==NULL){
//             return;
//         }
//     }
//     new3->next=head->next;
//     head->next=new3;
//     return;
// }
void insertAfter(node* head, int key, int val){
    node* new3=new node(val);
    if(head==NULL){
        head=new3;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        if(temp->data==key){
            new3->next=temp->next;
            temp->next=new3;
            return;
        }
        temp=temp->next;
    }
    if(temp->data==key){
        new3->next=temp->next;
        temp->next=new3;
        return;
    }
}
void deleteHead(node* &head){
    if(head==NULL){
        return;
    }
    node* temp=head;
    head=head->next;
    delete(temp);
    return;
}
void deleteFromTail(node* &head){
    if(head==NULL){
        return;
    }
    node* prev=NULL;
    node* temp=head;
    if(temp->next==NULL){
        delete temp;
        return;
    }
    while (temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    delete temp;
    return;
    
}
void deleteFromKey(node* &head, int val){
    if(head==NULL)
    {
        return;
    }
    node* temp=head;
    node* prev=NULL;
    if(temp->data==val){
        if(temp->next==NULL){
            delete(temp);
            return;
        }
        else{
            temp=head;
            head=temp->next;
            delete(temp);
            return;
        }
    }
    while (temp->data!=val)
    {
        prev=temp;
        temp=temp->next;
        if(temp==NULL){
            return;
        }
    }
    if(temp->data==val){
        prev->next=temp->next;
        delete(temp);
        return;
    }
    return;
    
}
// void searching(node* head){

// }
void display(node* head){
    if(head==NULL){
        cout<<"Empty List";
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
    insertATtail(head, 2);
    display(head);
    insertATtail(head, 9);
    display(head);
    insertAThead(head, 10);
    display(head);
    insertAThead(head, 32);
    display(head);
    insertAfter(head, 9, 77);
    display(head);
    insertAfter(head, 32, 57);
    display(head);
    insertAfter(head, 2, 33);
    display(head);
    deleteHead(head);
    display(head);
    deleteFromTail(head);
    display(head);
    deleteFromKey(head, 9);
    display(head);
    // deleteFromKey(head, 2);
    // display(head);


}