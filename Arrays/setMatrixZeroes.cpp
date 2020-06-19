Question Link - https://leetcode.com/problems/set-matrix-zeroes/


 void setZeroes(vector<vector<int>>& v) {
        
       
       for(int i=0;i<v.size();i++){
           
           for(int j=0;j<v[i].size();j++){
               
              if(v[i][j] == 0){
                  
                  for(int k=0;k<v[i].size();k++){
                      
                      if(v[i][k] !=0){v[i][k] = -1000;}
                 
                  }
                     
              } 
               continue;
      
           }
       
       } 
        
               
       for(int i=0;i<v[0].size();i++){
           
           for(int j=0;j<v.size();j++){
               
              if(v[j][i] == 0){
                  
                  for(int k=0;k<v.size();k++){
                      
                      if(v[k][i] !=0){v[k][i] = -1000;}
                 
                  }
                     
              }
               continue;
      
           }
       
       } 
        
        
        
       for(int i=0;i<v.size();i++){
           
           for(int j=0;j<v[i].size();j++){
               
               if(v[i][j] == -1000){v[i][j] =0;}
               
           }
       }
           

    }
