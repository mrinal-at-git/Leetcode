Question Link - https://leetcode.com/problems/remove-element/

 int removeElement(vector<int>& v, int val) {
   int i =0;
         for(int j=0;j<v.size();j++){
             
             if(v[j] !=val){
                 v[i] = v[j]; 
                 i++;
             }
    
             
         }
        
     return i;
        
    }
