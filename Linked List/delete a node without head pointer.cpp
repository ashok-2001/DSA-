class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       // Your code here
       Node* temp=NULL, *prev=NULL;
       prev=del;
       del = del->next;
       prev->data=del->data;
       prev->next=del->next;
       delete del;
       
    }

};