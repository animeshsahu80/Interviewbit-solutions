/**
 * Definition for singly-linked list.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
 
map<RandomListNode*,RandomListNode*> mp;
RandomListNode* Solution::copyRandomList(RandomListNode* A) {
    if(A==NULL)
        return NULL;
    RandomListNode* curr=new RandomListNode(A->label);
    mp[A]=curr;
    curr->next=copyRandomList(A->next);
    curr->random=mp[A->random];
    return curr;
}
