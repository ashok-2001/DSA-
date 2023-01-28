#include<bits/stdc++.h>
using namespace std;

void left_rotate(string &str, int d){
    reverse(str.begin(), str.begin()+d);
    reverse(str.begin()+d, str.end());
    reverse(str.begin(), str.end());
}
void right_rotate(string &str1, int d){
    left_rotate(str1, str1.length()-d-1);
}
// void left_rotate(string &str, int d){
//     int n = str.length(), k=0;
//     string s = str+str;
//     for (int i = d; i < 2*n - d; i++) if(k==n) break, str[k++]=s[i];
// }
// void right_rotate(string &str1, int d){
//     int n = str1.length(), k=0;
//     string s = str1+str1;
//     for (int i = n-d-1; i<2*n-d; i++) if(k==n) break, str[k++]=s[i];
// }
int main(){
    //"My Name is Ashok My Name is Ashok "
    string str="My Name is Ashok ", str1=str;  //My Name is Ashok     shokMy Name is A      ame is AshokMy N
    left_rotate(str, 4);
    cout<<str<<endl;
    right_rotate(str1, 4);
    cout<<str1<<endl;
}