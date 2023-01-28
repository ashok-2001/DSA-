#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 1000
class queueNode{
    int* arr;
    int front, back;
    public:
    queueNode(){
        arr=new int[MAX_SIZE];
        front=-1;
        back=-1;
    }
    void enqueue(int data){
        if(back==MAX_SIZE-1){
            cout<<"Queue is overflow"<<endl;
            return;
        }
        back++;
        arr[back]=data;
        if(front==-1){
            front++;
        }
        return;
    }
    void dequeue(){
        if(front==-1 || front>back){
            cout<<"Queue is empty"<<endl;
            return;
        }
        front++;
    }
    int peek(){
       if(front==-1 || front>back){
            return -1;
        }
        return arr[front];       
    }
    bool isNull(){
       if(front==-1 || front>back){
            return true;
        }
        return false;   
    }
    bool isFull(){
        if(front==0 && back==MAX_SIZE-1){
            return true;
        }
        return false;
    }
    void display(){
        for (int i = front; i <= back; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    }
};
int main(){
    queueNode s;
    cout<<s.isFull()<<endl;
    cout<<s.isNull()<<endl;
    cout<<s.peek()<<endl;
    s.enqueue(10);
    s.enqueue(3);
    s.enqueue(63);
    s.enqueue(54);
    s.display();
    s.dequeue();
    s.display();
    s.enqueue(43);
    s.enqueue(98);
    s.display();
    s.dequeue();
    s.dequeue();
    s.display();
    cout<<s.isFull()<<endl;
    cout<<s.isNull()<<endl;
    cout<<s.peek()<<endl;
}