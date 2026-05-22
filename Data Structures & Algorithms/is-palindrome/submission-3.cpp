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
    std::string_view strcmp(resStr);

// Compare the first half of the view against its own reverse iterator
    return std::equal(strcmp.begin(), strcmp.begin() + strcmp.size() / 2, strcmp.rbegin());

    }
};
