class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(const int& i : nums){
            res ^= i;
        }
        return res;
    }
};
