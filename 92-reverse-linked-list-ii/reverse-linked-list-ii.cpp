
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
      ListNode* leftprev = dummy;
      ListNode* currNode = head;
      for(int i=0;i<left-1;i++){
        leftprev = leftprev->next;
        currNode = currNode->next;
        }
        ListNode* sublistHead = currNode;
        ListNode* prevNode =NULL;
        for(int i = 0;i<=right-left;i++){
            ListNode* nextnode = currNode->next;
            currNode->next = prevNode;
            prevNode =currNode;
            currNode = nextnode;
        }
            leftprev->next =prevNode;
            sublistHead->next =currNode;

            return dummy->next;
        
}
        
      
        
    
};