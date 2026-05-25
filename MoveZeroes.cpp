#include <vector>

class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int insertPos = 0;
        for (int num : nums) {
            if (num != 0) nums[insertPos++] = num;
        }
        while (insertPos < nums.size()) {
            nums[insertPos++] = 0;
        }
    }
};