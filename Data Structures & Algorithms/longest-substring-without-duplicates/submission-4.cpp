class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_set<char> seen;
       size_t max_length = 0;
       size_t l = 0;

       for(size_t r = 0; r < s.length();  r++){
        while(seen.count(s[r])){
            seen.erase(s[l]);
            l++;
        }
        
        seen.insert(s[r]);
        max_length = max(max_length, (r-l)+1);

       }
        return max_length;
    }
};
