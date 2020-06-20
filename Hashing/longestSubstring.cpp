Question Link -https://leetcode.com/problems/longest-substring-without-repeating-characters/


 int lengthOfLongestSubstring(string s) {
        
        map <char, int> m;
        
        int start =-1;
        int max_len =0;
        
        
        for(int i=0;i<s.size();i++){
            if(m.count(s[i]) !=0)
                start = max(start, m[s[i]]); // sliding the window to the right
            
            m[s[i]] = i; //saving last occurence of elements 
            max_len = max(max_len, i-start); 
            
            
        
            
        }
     return max_len;   
    }
