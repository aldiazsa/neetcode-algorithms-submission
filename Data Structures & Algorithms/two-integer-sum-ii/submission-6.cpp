class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left{0};
        int right{static_cast<int>(numbers.size()-1)};

        while( left < right ){
            const int sumOfTwo = numbers[left] + numbers[right];

            if( sumOfTwo == target) { 
                return { left + 1, right + 1 }; 
            } 
            else if ( sumOfTwo > target){ 
                right--;
            } 
            else{ 
                left++;
            }
        }
        return {};
    }
};
