Question Link - https://leetcode.com/problems/find-the-duplicate-number/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
    
     //Floyd's Cycle Detection 
     int fp = nums[0];
     int sp =nums[0];     
         
    do{                                  
        sp = nums[sp];
        fp= nums[nums[fp]];
    }while(fp!=sp);
        
    
        
    sp = nums[0];
        
     while(fp!=sp){
        sp = nums[sp];
        fp= nums[fp];
    }
        
    return fp;
        
           
    }
};
