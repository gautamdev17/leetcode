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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode((l1->val+l2->val)%10);//in c++ this is used
        int carry=(l1->val+l2->val)/10;
        //ListNode* node = new ListNode(x);
        ListNode* curr = head;//point to head
        // move l1 and l2 since we just processed their first nodes
        l1 = l1->next;
        l2 = l2->next;
        while(l1!=NULL && l2!=NULL){
            curr->next= new ListNode((l1->val+l2->val+carry)%10);
            curr=curr->next;
            carry=(l1->val+l2->val+carry)/10;
            l1 = l1->next;
            l2 = l2->next;
        }
        if(l2!=NULL){
            while(l2!=NULL){
                curr->next= new ListNode((l2->val+carry)%10);
                carry=(l2->val+carry)/10;
                curr=curr->next;
                l2=l2->next;
            }
        }else if(l1!=NULL){
            while(l1!=NULL){
                curr->next= new ListNode((l1->val+carry)%10);
                carry=(l1->val+carry)/10;
                curr=curr->next;
                l1=l1->next;
            }
        }
        //if there is carry leftover
        if (carry > 0) {
            curr->next = new ListNode(carry);
        }
        return head;
    }
};