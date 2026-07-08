/*
floyd loop detection -
part 1 -> detect if loop exist
    fast slow pointer approach
        init fast and slow at head
        move slow by 1 step and fast by 2 steps until fast becomes null or fast next becomes null
        if fast and slow becomes equal, loop exit

part 2 -> if loops exists, remove loop
    re initialize slow at head again, keep fast at same place
    move slow and fast by 1 step, where they instersected(lets call it i), that will be the starting node

part 3 -> if loop exists, rmove loop
    create a temo at i
    move temp until temp->next != i
    then make temp->next == NULL

*/

https://leetcode.com/problems/remove-nth-node-from-end-of-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* t1 = head;
        ListNode* t2 = head;

        //move t2 ahead by n steps

        for(int i = 0; i < n; i++){
            t2 = t2->next;
        }

        if(t2 == NULL) return head->next;

        while(t2 != NULL){
            t1 = t1->next;
            t2 = t2->next;
        }
        ListNode* toDel = t1->next;
        t1->next = t1->next->next;
        delete toDel;

        return head;
    }
};