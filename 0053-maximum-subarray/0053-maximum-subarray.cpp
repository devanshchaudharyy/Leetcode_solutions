#include <vector>
#include <algorithm>

class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
        int currentSum = nums[0];
        int maxSum = nums[0];

        for (size_t i = 1; i < nums.size(); i++) {
            // Either extend the previous subarray or start new from nums[i]
            currentSum = std::max(nums[i], currentSum + nums[i]);
            // Track the maximum sum seen so far
            maxSum = std::max(maxSum, currentSum);
        }

        return maxSum;
    }
};