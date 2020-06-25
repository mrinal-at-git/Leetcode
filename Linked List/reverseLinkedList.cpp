Question Link - https://leetcode.com/problems/reverse-linked-list/



   /*RECUSRIVE*/
ListNode* reverseList(ListNode* head) {
        
        if(head== NULL) return head;
        if(head->next == NULL) return head;
        
        ListNode* curr = head;
        ListNode* Next_node = head->next;
        
        ListNode* newHead = reverseList(head ->next);
        
        Next_node->next = curr;
        curr->next = NULL;
        
        return newHead;
 
        
    }
    
    
    
    
    /*ITERATIVE*/
    ListNode* reverseList(ListNode* head) {
        
        ListNode* curr = head;
        ListNode* prev = NULL;
        
        while(curr!=NULL){
            ListNode* next_node = curr->next;
            curr->next = prev;
            
            prev = curr;
            curr = next_node;
  
        }
 
         return prev;
        
    }
