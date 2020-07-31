/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    ListNode* temp=new ListNode(0);
    temp->next=A;
    ListNode* slow=temp;
    ListNode* fast=temp;
    
    for(int i=1;i<=B+1;i++){
        if(fast)
        fast=fast->next;
        else
        break;
    }
    while(fast){
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=slow->next->next;
    return temp->next;
}
