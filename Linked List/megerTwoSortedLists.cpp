Question Link - https://leetcode.com/problems/merge-two-sorted-lists/

/*ITERATIVE*/
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;
        
        ListNode *curr = new ListNode();
        ListNode *i = curr;
      
        
        
        while(l1!=NULL && l2!=NULL){
            
          if(l1->val < l2->val){ 
              ListNode* temp = new ListNode(l1->val);
               i ->next = temp; i = i->next;
               l1= l1->next;
              }
    
          else if(l1->val > l2->val){
                  ListNode* temp = new ListNode(l2->val);
                   i ->next = temp; i = i->next;
                  l2 = l2->next;               
              }

           else{                
                 ListNode* temp = new ListNode(l1->val);
                  i ->next = temp; i = i->next;              
                 ListNode* temp1 = new ListNode(l2->val);
                 i->next = temp1; i=i->next;

                l1= l1->next;
                l2 = l2->next;
            }
            
        }
        
        
       if(l1 != NULL){ i->next = l1;  }
       if(l2 != NULL){ i->next = l2; }
         
        return curr->next;   
        
    }
    
    
    
    
    
    
    
    
    
    
    /*RECURSIVE*/
    
    
     ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* result = NULL; 
	
	
	if (l1 == NULL) return l2; 
	else if (l2 == NULL) return l1; 
	

	if (l1->val <= l2->val) 
	{ 
		result = l1; 
		result->next = mergeTwoLists(l1->next, l2); 
	} 
	else
	{ 
		result = l2; 
		result->next = mergeTwoLists(l1, l2->next); 
	} 
	return(result); 
}
