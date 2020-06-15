Question Link -https://leetcode.com/problems/missing-number/

class Solution {
public:
        int missingNumber(vector<int>& v) {
        
        int size = v.size();
        
        long int sum_n_nos = (size*(size+1))/2;
        long int arr_sum =0;
        
        for(int i=0;i<v.size();i++){
            
            arr_sum += v[i];
        }
        
        return (sum_n_nos - arr_sum);
        
        
    }
};
