/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
    //Your code here
    if(head==NULL) return NULL;
    Node* temp=head, *prev=head;
    int cnt=1;
    while(temp){
        if(cnt==x){
            if(temp==head){
                if(head->next==NULL) {
                    delete head;
                    return NULL;
                }
                else {
                    head=head->next;
                    delete temp;
                    return head;
                }
            }
            prev->next=temp->next;
            delete temp;
            return head;
        }
        cnt++;
        prev=temp;
        temp=temp->next;
    }
    return head;
}
