
class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        if(head==NULL) return NULL;
        // Your code here
        Node* temp=head, *temp2=NULL;
        int cnt=0;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=head;
        temp=head;
        while(temp){
            cnt++;
            if(cnt==k) break;
            temp=temp->next;
        }
        temp2=temp->next;
        while(temp->next!=temp2){
            temp=temp->next;
        }
        temp->next=NULL;
        head=temp2;
        return head;
    }
};
    