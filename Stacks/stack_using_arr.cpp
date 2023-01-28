#include<bits/stdc++.h>
using namespace std;
#define MAX_Size 1000
class  Stack{
    int top;
    public:
    int arr[MAX_Size];
    Stack(){top=-1;}
    void push(int val){
        if(top>=MAX_Size-1){
            cout<<"Overflow"<<endl;
            return;
        }else{
            top+=1;
            arr[top]=val;
            return;
        }
    }
    void pop(){
        if(top<0){
            cout<<"Stack is underflow"<<endl;
            return;
        }else{
            arr[top]='\0';
            top-=1;
            return;
        }
    }
    int TOP(){
        if(top<0){
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        return arr[top];

    }
    bool isEmpty(){
        if(top<0){
            return true;
        }
        return false;
    }
    int size(){
        if(top<0){
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        return top+1;
    }
    void Display(){
        if(top<0){
            cout<<"stack is empty"<<endl;
            return;
        }else{
            for (int i = 0; i < top+1; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    Stack s;
    s.Display();
    cout<<"Empty(?): "<<s.isEmpty()<<endl;
    s.push(30);
    s.Display();
    cout<<"Empty(?): "<<s.isEmpty()<<endl;
    s.push(21);
    s.Display();
    cout<<"Empty(?): "<<s.isEmpty()<<endl;
    s.push(50);
    s.Display();
    cout<<"Empty(?): "<<s.isEmpty()<<endl;
    cout<<"Size of Stack : "<<s.size()<<endl;
    cout<<"Top Element of Stack : "<<s.TOP()<<endl;
    s.pop();
    s.Display();
    cout<<"Empty(?): "<<s.isEmpty()<<endl;
    cout<<"Size of Stack : "<<s.size()<<endl;
    cout<<"Top element of Stack : "<<s.TOP()<<endl;
}