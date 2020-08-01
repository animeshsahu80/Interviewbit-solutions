/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    ListNode* dummy=new ListNode(0);
    ListNode* curr=dummy;
    int carry=0;
    while(A || B){
        int a,b;
        if(A==NULL)
            a=0;
        else
            a=A->val;
        if(B==NULL)
            b=0;
        else
            b=B->val;
        int sum=a+b+carry;
        carry=sum/10;
        curr->next=new ListNode(sum%10);
        curr=curr->next;
        if(A)
        A=A->next;
        if(B)
        B=B->next;
    }
    if(carry){
        curr->next=new ListNode(carry);
        curr=curr->next;
    }
    curr->next=NULL;
    return dummy->next;
}
