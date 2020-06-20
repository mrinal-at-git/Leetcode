Question Link -https://leetcode.com/problems/longest-consecutive-sequence/

int longestConsecutive(vector<int>& v) {
        
        unordered_set<int> s;
        int length=0,temp=1;
        
        
        for(int i=0;i<v.size();i++){s.insert(v[i]);}
        
        
        for(int i=0;i<v.size();i++){
            
             if(s.find(v[i]-1) != s.end()) continue; // not starting of a subsequence
             
             temp =1;
             while(s.find(v[i]+temp) != s.end()) { temp++; }
            
             length = max(length, temp);
   
        }
        
        return length;     
        
    }
