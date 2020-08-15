/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    struct comp{
        bool operator()(ListNode* a,ListNode* b){
            return a->val>b->val;
        }
    };
    
    
    priority_queue<ListNode*,vector<ListNode*>,comp> q;
    for(auto x:A){
        q.push(x);
    }
    ListNode* head=new ListNode(0);
    ListNode* temp=head;
    int flag=0;
    while(q.size()){
        ListNode* t=q.top();
        ListNode* t2=t->next;
        if(flag==0){
            head->next=t;
            temp=head->next;
            flag=1;
        }
        else{
            temp->next=t;
            temp=temp->next;
        }
        q.pop();
        if(t2)
            q.push(t2);
    }
    return head->next;
}
