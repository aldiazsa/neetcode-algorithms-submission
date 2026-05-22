class Solution {
public:
    bool isPalindrome(string s) {
        string resStr;
        resStr.reserve(s.size());

        for(const auto& c : s){
            if(isalnum(static_cast<unsigned char>(c))){
                resStr.push_back(tolower(static_cast<unsigned char>(c)));
            }
        }
    
        return resStr == string(resStr.rbegin(), resStr.rend());

    }
};
