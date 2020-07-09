Question Link - https://leetcode.com/problems/3sum-closest/

int threeSumClosest(vector<int>& v, int target) {
        
    
        sort(v.begin(), v.end());
        int diff_so_far= INT_MAX, res =0;
        
  
        for(int i=0;i<v.size()-2;i++){
            
            int sum_one = target-v[i];
            
            int low = i+1, high =v.size()-1;
            
           
                 
            while(low<high){
                
                int sum_two_three = v[low] + v[high];
                
                 int diff = sum_two_three - sum_one;                                               
                 if(abs(diff) < abs(diff_so_far)) {res = v[i] + sum_two_three; diff_so_far = res - target;}

                
                if(sum_two_three > sum_one) high--;  

                else if(sum_two_three < sum_one) low++;
                
                else low++, high --;
     
            }
            
        }
        
       return res;
        
    }
