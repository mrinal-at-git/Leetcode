Question Link -  https://leetcode.com/problems/intersection-of-two-linked-lists/


ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        set <ListNode* > s;
        
        
        ListNode* curr = headA;
        
        while(curr !=NULL){
            
            s.insert(curr);
            curr = curr->next;
            
        }
        
        curr = headB;
        
        while(curr != NULL){
            
           if(s.find(curr) != s.end()){return curr;} 
            
            curr= curr->next;
    
        }
         
       return NULL; 
    }
