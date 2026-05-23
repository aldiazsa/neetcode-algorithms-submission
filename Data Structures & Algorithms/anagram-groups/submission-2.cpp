class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> sublists;
        

        for(const auto& str:strs){
            string tmp = str;
            sort(tmp.begin(), tmp.end());
            sublists[tmp].push_back(str);
        }
        
        vector<vector<string>> res;
        res.reserve(sublists.size());

        for(const auto& sublist:sublists){
            res.push_back(std::move(sublist.second));
        }

        return res;
    }
};
