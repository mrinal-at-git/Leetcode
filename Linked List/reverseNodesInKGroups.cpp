Question Link -  https://leetcode.com/problems/reverse-nodes-in-k-group/


ListNode* reverseKGroup(ListNode* head, int k) {
    
        ListNode* curr = head; ListNode* temp_head = NULL;ListNode* prev_node = NULL;
        int n=0;
        
        while(curr!=NULL)
        {n++;
         curr=curr->next;
            
        }
        curr=head;
      
        for(int i=0;i<(n/k);i++){
            
             
        ListNode* prev = NULL;      
        ListNode* next_node = NULL;
            
            for(int j=0;j<k;j++){
                
                if(j==0) temp_head = curr;
                
                next_node = curr->next;
                curr->next = prev;
                prev= curr;
                curr = next_node;   
                
            }
            
            if(i==0) {prev_node = head; head = prev;  }
         
            prev_node->next = prev;
            temp_head->next = curr;
            prev_node = temp_head;
          
            
        }
        
        return head;   
    }
