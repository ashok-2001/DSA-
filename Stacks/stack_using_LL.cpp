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
class Stack{
    public:
    node* top;
    Stack(){
        top=NULL;
    }
    void push(int val){
        node* newNode=new node(val);
        newNode->next=top;
        top=newNode;
    }
    void pop(){
        if(top==NULL){
            cout<<"Empty Stack"<<endl;
            return;
        }
        node* temp=top;
        top=top->next;
        delete temp;
        return;
    }
    int size(){
        if(top==NULL){
            cout<<"Empty Stack"<<endl;
            return 0;
        }
        int count=1;
        node* temp=top;
        while (temp->next!=NULL)
        {
            count++;
            temp=temp->next;
        }
        return count;
        
    }
    bool isEmpty(){
        if(top==NULL){
            // cout<<"Empty Stack"<<endl;
            return true;
        }
        return false;
    }
    int peek(){
        return top->data;
    }
    void display(){
        if(top==NULL){
            cout<<"Empty Stack"<<endl;
            return;
        }
        node* temp=top;  
        while (temp->next!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<temp->data<<endl;
        
    }

};
int main(){
    Stack s;
    cout<<s.isEmpty()<<endl;
    s.display();
    cout<<s.size()<<endl;
    s.push(20);
    s.push(32);
    s.push(50);
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
    s.display();
    cout<<s.size()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
    s.display();
    cout<<s.size()<<endl;
}