Question Link -  https://leetcode.com/problems/remove-nth-node-from-end-of-list/

 ListNode* removeNthFromEnd(ListNode* head, int n) {
        
          ListNode* fast = head;
          int count =0;
        
          for(int i =0;i<n; i++)
               fast = fast->next;
        
         
           if(fast == NULL){return head->next;}
        
        
          ListNode* curr = head;
          while(fast->next !=NULL){
              
              curr = curr->next;
              fast = fast->next;
    
          }
        
           curr->next = curr->next->next;
          
        return head;
        
    }
