https://leetcode.com/problems/middle-of-the-linked-list/

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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow ->next;
            fast = fast->next->next;
        }
        return slow;

    }
};

\

https://leetcode.com/problems/reverse-linked-list/

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
    ListNode* reverseList(ListNode* head) {
        ListNode* prevNode = NULL;
        ListNode* currNode = head;
        ListNode* nextNode = NULL;

        while(currNode != NULL){
            nextNode = currNode->next;
            currNode->next = prevNode;
            prevNode = currNode;
            currNode = nextNode;
        }
        return prevNode;



    }
};



https://leetcode.com/problems/palindrome-linked-list/description/

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
    ListNode* reverse(ListNode* head){
        ListNode* prevNode = NULL;
        ListNode* currNode = head;
        ListNode* nextNode = NULL;

        while(currNode!= NULL){
            nextNode = currNode->next;
            currNode->next = prevNode;
            prevNode = currNode;
            currNode = nextNode;
        }
        return prevNode;


    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        slow = reverse(slow);
        ListNode* p1 = head;
        ListNode* p2 = slow;
        
        while(p2){
            if(p1->val != p2->val){
                return false;
            }
            p1 = p1->next;
            p2 = p2-> next;
        }
        return true;

        

    }
};

https://leetcode.com/problems/intersection-of-two-linked-lists/
int findLength(ListNode* head){
    int length = 0;
    ListNode* temp = head;
    while(temp!= NULL){
        length++longtemp = temp->next;
    }
    return length;
}

ListNode* getIntersectoinNode(ListNode* headA, ListNode* headB){

    int lenA = findLength(headA);
    int lenB = findLength(headB);

    ListNode* tempA = headA;
    ListNode* tempB = headB;

    int deffInLength = abs(lenA - lenB);

    if(lenB > lenA){
        while(deffInLength--){
            tempB = tempB->next;
        }
        else{
            while(deffInLength--){
            tempA = tempA->next;
        }    
        }
        while(tempA != tempB){
            tempA = tempA->next;
            tempB = tempB->next;

        }
        return tempA;
    }



}

















