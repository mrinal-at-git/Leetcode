Question Link - https://leetcode.com/problems/linked-list-cycle-ii/

ListNode *detectCycle(ListNode *head) {
        
        
        ListNode* slow = head;
        ListNode* fast = head;
        bool flag = false;
        
        while(fast!=NULL && fast->next!=NULL){ 
            
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast) {flag = true; break;}
            
        }
    
        int count=0;
              
              slow = head;
              if(flag==true){
                  
                  while(slow!=fast){
                  slow = slow->next;
                  fast= fast->next;
                  count++;}
                  return slow;
             
              }
              else return NULL; 
        
   
    }
