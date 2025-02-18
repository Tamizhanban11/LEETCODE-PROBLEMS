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
        ListNode *current = head, *prev = NULL, *current1 = head;

        int length = 0;
        while(current1!=NULL){
            length++;
            current1 = current1->next;
        }
        int n1 = length -n;
        int count = 0;
        if(n1==0) head = head->next;

        else {
            while(n1>0){
                prev = current;
                current=current->next;
                n1--;
                if(n1==0) prev->next = current->next;
            }
        }
        return head;


        
    }
};