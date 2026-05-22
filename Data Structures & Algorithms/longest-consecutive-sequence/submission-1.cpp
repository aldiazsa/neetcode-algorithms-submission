class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> data(nums.begin(), nums.end());
        int res=0;
 
        
        for(const auto& num:nums){
            if(data.find(num-1) == data.end()){
                int length=1;
                while(data.find(num+length) != data.end()){
                    length++;
                }
                res = max(length, res);
            }
        }        

        return res;
    }
};
