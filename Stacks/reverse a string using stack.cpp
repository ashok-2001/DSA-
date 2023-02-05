char* reverse(char *S, int len)
{
    //code here
    stack<char> s;
    int i=0;
    for(i=0; i<len; i++){
        s.push(S[i]);
    }
    for(i=0; i<len; i++){
        S[i]=s.top();
        s.pop();
        
    }
    return S;
}