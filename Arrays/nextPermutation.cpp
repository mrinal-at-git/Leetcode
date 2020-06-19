Question Link - https://leetcode.com/problems/next-permutation/

 void nextPermutation(vector<int>& v) {
        
        
        // textcase 4,1,5,3,2
        
        int var = -1;
        for(int i=v.size()-1;i>=1;i--){
            
            if(v[i-1] < v[i]) {
                
                var = i-1;
                
               for(int j=v.size()-1;j>var;j--){
                   
                   if(v[var] < v[j]){
                       
                       swap(v[var], v[j]);
                       
                       int k = var+1;
                       int l = v.size()-1;
                       
                       while(k<l){
                           
                           swap(v[k++], v[l--]);
                           
                       }
                       
                       
                       break;
                   }
               
               } 
                
            break; 
                
            }
            
            
            
        }
        
        
        if(var == -1) {sort(v.begin(), v.end());}
  
    }
