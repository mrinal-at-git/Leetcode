Question Link - https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& v) {
        
        
        int sum =v[0] ,sum_so_far= v[0];
        
        //Handles when array contains only negative numbers
        for(int i=1;i<v.size();i++){
            
            sum = max(v[i],sum+ v[i]);
           sum_so_far = max(sum_so_far, sum); 
                 
             
        }
        
        return sum_so_far;
    }
};
