int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node* temp=head;
       int len=0, s;
       while(temp) len++, temp=temp->next;
       s=len-n;
       len=0;
       temp=head;
       while(temp){
           if(len==s) return temp->data;
           len++;
           temp=temp->next;
       } 
       return -1;
}

