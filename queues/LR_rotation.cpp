#include<bits/stdc++.h>
using namespace std;
void LeftRotate(char *str, int m){
    deque<char> d;
    int n=11;
    for (int i = 0; i < n; i++) d.push_back(str[i]);
    for (int i = 0; i < m; i++) d.push_back(d.front()), d.pop_front();
    for (int i = 0; i < n; i++) str[i]=d.front(), d.pop_front();
}
void RightRotate(char &str){
    
}
int main(){
    char str[]="ASHOK KUMAR";
    LeftRotate(str, 2);
    for (int i = 0; i < 11; i++) cout<<str[i]<<" ";
    cout<<endl;
}