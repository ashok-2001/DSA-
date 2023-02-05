Node *removeDuplicates(Node *head)
{
    set<int> set;
    if(head==NULL) return NULL;
    // if(head->next==NULL) return head;
    Node* temp=head, *prev=head;
    int len=0;
    while(temp){
        set.insert(temp->data);
        temp=temp->next;
    }
    temp=head;
    for(auto it=set.begin(); it!=set.end(); it++){
        temp->data=*it;
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    return head;
 
}