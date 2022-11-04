Method 1

//Using hashing
//Here we will chech if the node we have visisted is present or not if we have visited it then it mean there is cycle.

//Time complexity: O(n)
//Space complexity: O(n)

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* dummy=head;
        unordered_map<ListNode*,int>map;
        while(dummy!=NULL){
            if(map.find(dummy)==map.end()){
                map[dummy]++;
            }
            else{
                return true;
            }
            dummy=dummy->next;
        }
        return false;
        
    }
};

//Using pointer


class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL ||head->next==NULL){
            return false;
        }
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                return true;
            }
        }
         return false;
    }
};