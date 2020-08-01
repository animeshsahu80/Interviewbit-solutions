/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::insertionSortList(ListNode* A) {

    ListNode* root=A;
    ListNode* temp=A;
    temp=temp->next;
    while(temp){
        ListNode* curr=root;
        int num=temp->val;
        while(curr!=temp&& curr->val<num){
            curr=curr->next;
        }
        ListNode* node=curr;
        int x=curr->val;
        while(curr!=temp){
            int y=curr->next->val;
            curr->next->val=x;
            x=y;
            curr=curr->next;
        }
        node->val=num;
        temp=temp->next;
    }
    return root;
}
