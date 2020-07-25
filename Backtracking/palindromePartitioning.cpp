Question link - https://leetcode.com/problems/palindrome-partitioning/


 class Solution {
public:
    vector<vector<string>> partition(string s) {
        
        vector<vector<string>> res;
        vector<string> r;
        findStrings(res, s, r, 0);
        return res;
    }
    
    
   void findStrings(vector<vector<string> > &v, string &s, vector<string> &temp, int index) { 
       
    if(index == s.size()) { v.push_back(temp); return;}
       
	for (int i = index; i < s.length(); i++) 
	{ 
		string str = s.substr(index, i - index + 1);
        
		if (checkPalindrome(str)) 
		{ 
			temp.push_back(str); 
			findStrings(v,s,temp,i+1); 
			temp.pop_back();
		} 
	} 
	 
} 
    
     bool checkPalindrome(string s){
        int low = 0, high = s.length() - 1;
        while(low < high){
            if(s[low] != s[high]) return false;
            low++;
            high--;
        }
        return true;
    }
    
    
};
