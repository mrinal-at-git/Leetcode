Question Link - https://leetcode.com/problems/max-consecutive-ones/


int findMaxConsecutiveOnes(vector<int>& v) {
        
        
        
        int count=0,  res=0;
              
            for(int j=0;j<v.size();j++){
                
                if(v[j] ==1) count++;
                else {res = max(res, count), count=0;}
 
            }
            
          res = max(res, count), count=0;
        
        
        
    return res;    
        
    }
