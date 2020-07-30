/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* head) {
    ListNode* curr=head;
    if(curr==NULL|| curr->next==NULL)
        return curr;
    while(curr->next){
        if(curr->val==curr->next->val)
            curr->next=curr->next->next;
        else
            curr=curr->next;
    }
    return head;
}
