Question Link - https://leetcode.com/problems/remove-duplicates-from-sorted-array/

   // o(1) extra space
 int removeDuplicates(vector<int>& v) {
        
        if(v.size() ==0 || v.size() ==1) return v.size();
        int j=0;
        for(int i =0;i<v.size()-1;i++) {
            
            if(v[i]!= v[i+1]){
                v[j] = v[i];
                j++;
            }
            
        
        }
        
        v[j] = v[v.size()-1];
        j++;
        
     return j;
    }
