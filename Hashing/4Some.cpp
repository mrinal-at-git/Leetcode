Question Link -https://leetcode.com/problems/4sum/

vector<vector<int>> fourSum(vector<int>& v, int target) {
        
        vector<vector<int> > res;
        
        if(v.empty()) return res;
        
        sort(v.begin(), v.end());
        
        
        for(int i=0;i<v.size();i++){
            
            int target_3 = target - v[i];
            
            
            for(int j=i+1;j<v.size();j++){
                
                
                int target_2 = target_3- v[j];
                
                int low = j+1;
                int high = v.size()-1;
                
                while(low < high){
                    
                   int two_sum = v[low] + v[high]; 
                    
                   if(two_sum < target_2) low++;
                   
                   else if(two_sum > target_2) high--;
                    
                   else{
                       
                       vector <int> quad(4,0);
                       quad[0] = v[i];
                       quad[1] = v[j];
                       quad[2] = v[low];
                       quad[3] = v[high];
                       res.push_back(quad);
                       
                       // we don't wanr duplicate quadruplets;
                       // Processing the duplicates of number 3
                       while(low < high && v[low] == quad[2]) low++;
                       // Processing the duplicates of number 4
                       while(low < high && v[high] == quad[3]) high--;
                    
                   }
          
                }
                
                // Processing the duplicates of number 2
                while(j+1<v.size() && v[j] == v[j+1]) j++; // one more increment in start of loop
                   
            }
            
            // Processing the duplicates of number 1
            while(i+1<v.size() && v[i] == v[i+1]) i++;
          
            
        }
        
        
    return res; 
    }
