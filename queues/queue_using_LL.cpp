#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

class Queue{
    public:
    Node *front, *rear;
    Queue(){
        front=rear=NULL;
    }
    void enqueue(int val){
        Node* NewNode=new Node(val);
        if(front==NULL && rear==NULL){
            front=rear=NewNode;
            return;
        }
        rear->next=NewNode;
        rear=NewNode;
    }
    void dequeue(){
        if(front==NULL){
            cout<<"Empty Queue"<<endl;
            return;
        }
        if(front!=rear){
            Node* temp;
            temp=front;
            front=front->next;
            delete temp;
            return;            
        }
        Node* temp;
        temp=front;
        delete temp;
        return;
    }
    int peek(){
        if(front==NULL){return -1;}
        return front->data;
    }
    bool isEmpty(){
        if(front==NULL){
            return true;
        }
        return false;
    }
    void display(){
        Node* temp=front;
        while (temp!=rear)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<temp->data<<endl;
        
    }
};

int main(){
    Queue q;
    cout<<q.isEmpty()<<endl;
    cout<<q.peek()<<endl;
    q.enqueue(23);
    q.display();
    q.dequeue();
    q.display();
    q.enqueue(32);
    q.enqueue(87);
    q.enqueue(65);
    q.display();
    q.dequeue();
    q.display();
    cout<<q.isEmpty()<<endl;
    cout<<q.peek()<<endl;
}