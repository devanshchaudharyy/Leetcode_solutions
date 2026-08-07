class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        
        for (int i = 0; i < nums.size(); i++) {
            int targetIdx = abs(nums[i]) - 1;

            if (nums[targetIdx] < 0) {
                ans.push_back(abs(nums[i]));
            } else {
             
                nums[targetIdx] = -nums[targetIdx];
            }
        }
        
        return ans;
    }
};