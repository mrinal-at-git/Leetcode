Question Link -https://leetcode.com/problems/delete-node-in-a-linked-list/

    void deleteNode(ListNode* node) {
        
        if(node->next){
        ListNode* temp = node->next;
        node->val = temp->val;
        node->next = temp->next;
        delete temp;
        
        
    }
  }
