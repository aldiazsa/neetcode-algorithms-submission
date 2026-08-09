class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xORedValues=0;

        for(int i=0; i <= nums.size(); i++){
            xORedValues ^= i;
        }

        for(const int& num : nums){
            xORedValues ^= num;
        }

        return xORedValues;
    }
};
