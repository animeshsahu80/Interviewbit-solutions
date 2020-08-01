/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    ListNode* curr=A;
    ListNode* temp=A;
    if(A==NULL|| A->next==NULL)
        return A;
    int len=0;
    while(temp){
        len++;
        temp=temp->next;
    }
    B=B%len;
    if(B==0)
        return A;
    int l=len-B-1;
    while(l--){
        curr=curr->next;
    }
    ListNode* new_head=curr->next;
   
    ListNode* head=curr->next;
     curr->next=NULL;
    while(new_head->next){
        new_head=new_head->next;
    }
    new_head->next=A;
    return head;
}
