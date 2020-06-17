Question Link -https://leetcode.com/problems/rotate-image/

 
 void rotate(vector<vector<int>>& v) {
         int n = v.size();
 
        for(int i=0;i<n/2;i++){
            
           for(int j=i;j<n-1-i;j++){
               
               int temp = v[i][j];
               v[i][j] = v[n-1-j][i];
               v[n-1-j][i] = v[n-1-i][n-1-j];
               v[n-1-i][n-1-j] =v[j][n-1-i];
               v[j][n-1-i] = temp;   
           }                
        }     
    }
