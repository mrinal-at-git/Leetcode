Question Link -  https://leetcode.com/problems/copy-list-with-random-pointer/

Node* copyRandomList(Node* head) {
        
        unordered_map<Node*, Node*> mp;
        
        
         Node* curr = head;
         Node* temp = NULL;
        
        while(curr!=NULL){
           temp = new Node(curr->val); 
           mp[curr] = temp;
           curr = curr->next;       
        }
        
        curr = head;
        
         while(curr!=NULL){
           temp = mp[curr]; 
           temp->next = mp[curr->next];
           temp->random = mp[curr->random];   
           curr =curr->next;
        }
        
        
      return mp[head];  
    }
