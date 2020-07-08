Question Link - https://leetcode.com/problems/3sum/


vector<vector<int>> threeSum(vector<int>& v) {
        
         vector<vector<int> > res;
        
        if(v.empty() || v.size()<3)return res;
        
        
        sort(v.begin(), v.end());
        
        
        
        for(int i=0;i<v.size()-2;i++){
            
            int sum_one = 0-v[i];
            
            int low = i+1, high =v.size()-1;
            
           
                 
            while(low<high){
                
                int sum_two_three = v[low] + v[high];
                
                if(sum_two_three > sum_one) high--; 
                 
               else if(sum_two_three < sum_one) low++;
                
                else{
                 vector<int> temp(3,0);
                 temp[0] = v[i];
                 temp[1] = v[low];
                 temp[2] = v[high];                         
                 res.push_back(temp);                         
                                         
                
                
                while(low<high && v[low] == temp[1]){low++;}
                while(high>low && v[high] == temp[2]){high--;}
                    
                }
                
            }
            
           
          while(i<v.size()-2 && v[i] == v[i+1]){i++;}  
           
      
            
        }
        
       return res;
        
    }
