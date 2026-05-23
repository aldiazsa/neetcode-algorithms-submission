class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;

        for (const auto& s : strs) {
            array<int, 26> count{};
            for (char c : s) count[c - 'a']++;

            string key;
            for (int n : count) key += '#' + to_string(n);

            groups[key].push_back(s);
        }

        vector<vector<string>> res;
        res.reserve(groups.size());
        for (auto& [_, vec] : groups)
            res.push_back(std::move(vec));

        return res;
    }
};
