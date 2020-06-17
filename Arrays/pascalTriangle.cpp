 Question Link - https://leetcode.com/problems/pascals-triangle/
 
 
 vector<vector<int>> generate(int rows) {
       
   
        vector<vector<int> >v(rows);
  
           for(int i=0;i<v.size();i++)
            {
               
                for(int j=0;j<=i;j++)
                {
                     if( j==0|| j == i ) { v[i].push_back(1);}
                    
                      else{ v[i].push_back(v[i-1][j-1] + v[i-1][j]);} 
                      
                }
    
            }
        return v;

    }
