/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp=head;
        ListNode* before=nullptr;
        int pos=1;
        while(pos<left){
            before=temp;
            temp=temp->next;
            pos++;
            continue;
        }
        int times=right-left+1;
        ListNode* curr=temp;
        ListNode* prev=nullptr;
        while(times--){
            ListNode* nextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
        }
        if(before==nullptr){
            head=prev;
        }
        else{before->next=prev;}
        
        temp->next=curr;
        return head;

    }
};