Question Link - https://leetcode.com/problems/trapping-rain-water/

int trap(vector<int>& v) {
        
        if(v.empty()) return 0;
        int max_left[v.size()],max_right[v.size()] ;
        
        max_left[0] = v[0];
         for(int i =1;i<v.size();i++) {
             max_left[i] = max(max_left[i-1], v[i]);
  
         }
         max_right[v.size()-1] = v[v.size()-1];
         for(int i =v.size()-2;i>=0;i--) {
             max_right[i] = max(max_right[i+1], v[i]);
  
         }
        int result = 0;
        for(int i=0;i<v.size();i++)
            result += min(max_left[i], max_right[i]) - v[i];
        
        
   return result;
   
   }
