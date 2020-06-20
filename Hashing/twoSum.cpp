Question Link -https://leetcode.com/problems/two-sum/

 vector<int> twoSum(vector<int>& v, int target) {
        
       unordered_map<int, int> m;
       vector<int> res; 
       
        
        for(int i=0;i<v.size();i++){
            
             if(m.find(target-v[i]) !=m.end()){
             
                 auto  it = m.find(target-v[i]);
                 res.push_back(it->second);
                 res.push_back(i);
                 break;
                 
                 
             }else{
                 
                 m.insert({v[i], i});
                 
             }
     
            
        }
        
  return res;  
        
    }
