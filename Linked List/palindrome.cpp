Question List - https://leetcode.com/problems/palindrome-linked-list/

bool isPalindrome(ListNode* head) {
        
        if(head==NULL || head->next == NULL) return true;
        
    // find middle
        
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev_of_slow = NULL;
        
        while(fast!=NULL && fast->next!=NULL){
            
            prev_of_slow = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
      prev_of_slow->next = NULL;    
        
        
     if (fast != NULL) {  // odd no of node in LL skip middle
            slow = slow->next; 
        } 
        
        
       // rev LL
        
        ListNode* prev = NULL;
        ListNode* curr = slow;
        ListNode* next_node = NULL;
        
        while(curr !=NULL){
           next_node = curr->next; 
           curr->next = prev;
           
           prev = curr;
           curr = next_node;
     
        }
        
        
        ListNode* p1 = head;
        ListNode* p2 = prev; // head of second  LL
        
        
        
        
       while(p1!=NULL && p2!=NULL)
           
            if(p1->val!=p2->val) return false;
           
            p1 = p1->next;
            p2 = p2->next;
       }
        
         
        if(p1==NULL&& p2==NULL) return true; 

        return false;
   
    }
