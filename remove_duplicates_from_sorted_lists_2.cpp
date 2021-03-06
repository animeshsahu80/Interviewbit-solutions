/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* head) {
    if(head==NULL || head->next==NULL)
        return head;
    if(head->val!=head->next->val){
        head->next=deleteDuplicates(head->next);
        return head;
    }
    ListNode* curr=head;
    while(curr && curr->val==head->val){
        curr=curr->next;
    }
    return deleteDuplicates(curr);
}
