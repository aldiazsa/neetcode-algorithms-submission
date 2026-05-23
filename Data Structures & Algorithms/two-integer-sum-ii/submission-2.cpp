class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> hm;
        int cnt=0;
        for(const auto& num : numbers){
            if( hm.count(num)){
                return {hm[num], cnt+1}; 
            } else {
                hm[target-num]=cnt+1;
            }
            cnt++;
        }
        return {};
    }

};

// num  1 2
// diff 2 1 
// cnt  0 1

// hm
// [2:1]
