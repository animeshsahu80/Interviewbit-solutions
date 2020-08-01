/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* merge(ListNode* a,ListNode* b){
    ListNode* dummy=new ListNode(0);
    ListNode* curr=dummy;
    while(a&&b){
        if(a->val<b->val){
            curr->next=a;
            a=a->next;
        }
        else{
            curr->next=b;
            b=b->next;
        }
        curr=curr->next;
    }
    if(a){
        curr->next=a;
    }
    else if(b){
        curr->next=b;
    }
    return dummy->next;
}
ListNode* Solution::sortList(ListNode* head) {
    if(head==NULL || head->next==NULL)
        return head;
    ListNode* first=head;
    ListNode* sec_start=head;
    ListNode* sec_end=head;
    while(sec_end&& sec_end->next){
        first=sec_start;
        sec_start=sec_start->next;
        sec_end=sec_end->next->next;
    }
    first->next=NULL;
    ListNode* left=sortList(head);
    ListNode* right=sortList(sec_start);
    return merge(left,right);
}
