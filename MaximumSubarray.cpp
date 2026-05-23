#include <vector>
#include <algorithm>

class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
        int currentSum = 0;
        int maxSum = nums[0];
        for (int num : nums) {
            currentSum = std::max(num, currentSum + num);
            maxSum = std::max(maxSum, currentSum);
        }
        return maxSum;
    }
};