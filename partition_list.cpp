/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* head, int B) {
    ListNode* left_head=new ListNode(0);
    ListNode* left=left_head;
    ListNode* right_head=new ListNode(0);
    ListNode* right=right_head;
    while(head){
        if(head->val<B){
            left->next=head;
            left=left->next;
        }
        else{
            right->next=head;
            right=right->next;
        }
        head=head->next;
    }
    right->next=NULL;
    left->next=right_head->next;
    return left_head->next;
}
