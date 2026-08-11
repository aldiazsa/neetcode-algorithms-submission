class Solution {
public:
    int findMin(vector<int> &nums) {
        int left = 0;
        int right = nums.size()-1;

        while(left < right){
            int mid = left + (right - left) / 2;

            if(nums[mid] > nums[right]){
                left = mid + 1;
            } else {
                right = mid;
            }

        }

        return nums[left];
    }
};

/*
//6 7 8 9 1 2 3 4 5
        l r

l= 0 0 2 4
r= 8 4 4 4
m= 4 2 3



*/