Question Link - https://leetcode.com/problems/rotate-list/


ListNode* rotateRight(ListNode* head, int k) {
        
        if(head==NULL||head->next == NULL) return head;
        ListNode* curr =head;
        int n =0, count =0;
        
        while(curr!=NULL){ n++; curr= curr->next;}
        
        if(k%n ==0) return head;
        
        k = k%n;
        k = n-k;
       
        
        curr =head;
        while(curr!=NULL)
        {   count++; 
           if(count == k) break;
         curr = curr->next;}

        ListNode* kthone =curr->next;
 
        curr->next = NULL;
        
        
        
           
        curr = kthone;
       
        while(kthone->next!=NULL){ kthone = kthone->next;}
        
       kthone->next = head;
       head = curr;
       return head;
            
    }
