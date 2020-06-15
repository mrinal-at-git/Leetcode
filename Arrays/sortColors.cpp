Question Link - https://leetcode.com/problems/sort-colors/

class Solution {
public:
    void sortColors(vector<int>& arr) {
        
        int n = arr.size();
        int low =0 , mid =0, h = n-1;
        
        
        while(mid<=h){
            
          switch(arr[mid]){
                  
              case 0: swap(arr[low], arr[mid]);
                      low++, mid++;
                      break;
                  
              case 1: mid++;
                      break;
            
              case 2: swap(arr[mid], arr[h]);
                      h--;
                      break;
       
          }  

        }
        
        
    }
};
