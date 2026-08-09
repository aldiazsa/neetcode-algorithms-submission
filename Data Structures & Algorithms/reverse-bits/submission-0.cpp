class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int left = 0;
        int right = 31;

        while (left < right) {
            // Extract bits
            uint32_t bitL = (n >> left) & 1;
            uint32_t bitR = (n >> right) & 1;

            // If bits differ, flip both
            if (bitL != bitR) {
                n ^= (1u << left);
                n ^= (1u << right);
            }

            left++;
            right--;
        }
        return n;
    }
};
