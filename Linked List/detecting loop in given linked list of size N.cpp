class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        if(head==NULL) return false;
        Node *temp=head, *stored=NULL;
        // int cnt=1;
        unordered_map<Node*, int> mp;
        while(temp){
            // cnt++;
            if(mp[temp]==1) break;
            mp[temp]++;
            temp=temp->next;
        }
        stored=temp;
        temp=head;
        while(temp){
            if(temp==stored) return true;
            temp=temp->next;
        }
        return false;
        
    }
};
