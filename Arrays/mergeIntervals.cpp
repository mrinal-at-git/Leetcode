Question Link - https://leetcode.com/problems/merge-intervals/
 
 vector<vector<int>> merge(vector<vector<int>>& v) {
        
        
         int s=0, e =0, i=0, j=0;
        
         if(v.size() <=1){  vector<vector<int>> v1; v1 =v; return v;}
        
         sort(v.begin(), v.end());    
        
         for(i =0,j=1;j<v.size();j++){
            
            if(v[i][1] >= v[j][0]) { // OR if(v[i][0] <= v[j][0] &&  v[j][0] <= v[i][1]) due to sorting
                
               s = min(v[i][0] ,v[j][0]);
               e = max(v[i][1], v[j][1]);
               v[i][0] = s;
               v[i][1] = e;
                
            }else{
                
                i++;
                v[i][0] = v[j][0];
                v[i][1] = v[j][1];
           }
         }
            
         vector<vector<int>> v1(i+1);
         for(int k =0; k<= i;k++){
             
             for(int l =0;l<2;l++){
                 
                 v1[k].push_back(v[k][l]);
                 
                 
             }
   
         }   
            
       return v1;     
            
            
            
        }
