Question Link - https://leetcode.com/problems/combination-sum-ii/

 vector<vector<int>> combinationSum2(vector<int>& a, int target) {
        
     sort(a.begin(), a.end());
     vector<int> r;
     vector<vector<int> > res;
     findCombinations(a, target, r, res, 0);
     
     return res;
        
    }
    
    
    void findCombinations(vector <int> &a, int sum, vector <int> &r, vector<vector<int> >&res, int i){
    
    if(sum <0) return;

    if(sum ==0) { 
     res.push_back(r); 
    return; 
    }

   while(i < a.size() && sum- a[i] >=0){
    
     r.push_back(a[i]);
     i++;                   
     findCombinations(a, sum-a[i-1], r, res, i);
    
     while(i < a.size() && a[i] == a[i - 1]) {i++;}   
    
      r.pop_back();
    
    }

}
