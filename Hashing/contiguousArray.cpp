Question Link - https://leetcode.com/problems/contiguous-array/

int findMaxLength(vector<int>& v) {
        
    unordered_map <int,int> m;
    int pre_sum = 0, res=0;
    
    for(int i=0;i<v.size();i++)
    {
        if(v[i] == 0){ pre_sum -= 1;}
        else{ pre_sum +=v[i];}
        
        if(pre_sum ==0) {res = i+1;}
        
        if(m.find(pre_sum) == m.end()) { m.insert({pre_sum, i});}
        else{res = max(res, i-m[pre_sum]);}
        /*
           or 
         else{  auto  it = m.find(pre_sum);
                res = max(res, i-it->second);
             }
        
        */
     
        
    }
        
  return res;  
        
    }
