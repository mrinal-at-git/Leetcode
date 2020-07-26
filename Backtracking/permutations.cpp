Question Link - https://leetcode.com/problems/permutations/


 void allp(vector<vector<int>> &res,vector<int>& nums, int l, int r){
       
       
        if(l == r){res.push_back(nums);}
         
        else{
            
            for(int i=l;i<=r;i++)
            {
                swap(nums[l], nums[i]);
                allp(res, nums, l+1, r);
                swap(nums[l], nums[i]); // backtracking
            }
        }  
   }
    
  
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        
          vector<vector<int>> res;
          vector <int> temp;
        
          allp(res,nums, 0, nums.size()-1);
          return res;
    }
