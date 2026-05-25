class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        vector<vector<int>> freq(nums.size()+1);

        for(const auto& num:nums){
            count[num]++;
        }

        for(const auto& it : count){
            freq[it.second].push_back(it.first);
        }

        vector<int> res(k);
        int index = 0;
        for(int i=freq.size()-1; i>=0 && k>0; --i){
            for(const auto& num:freq[i]){
                res[index++] = num;
                if( !k-- ){
                    break;
                }
            }
        }

        return res;
    }
};
