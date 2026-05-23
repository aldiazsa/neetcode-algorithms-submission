class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> sublists;
        vector<vector<string>> res;

        for(const auto& str:strs){
            string tmp = str;
            sort(tmp.begin(), tmp.end());
            sublists[tmp].push_back(str);
        }
        
        for(const auto& sublist:sublists){
            res.push_back(sublist.second);
        }

        return res;
    }
};
