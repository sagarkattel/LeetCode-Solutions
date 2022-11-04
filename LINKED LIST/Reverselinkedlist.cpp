
class Solution{
    public:
    ListNode* reverseList(ListNode* head){
        if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode* current=head;
        ListNode* previous=NULL;
        ListNode* temp=current->next;
        while(current!=NULL){
            temp=current->next;
            current->next=previous;
            previous=current;
            current=temp;
        }
        return previous;
    }
};
