class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0;i<nums.size(); i++){
            int maxi = i;

            for(int j = i+1 ; j < nums.size() ; j++){
                if(nums[j] < nums[maxi]){
                    maxi = j;
                }
            }
            swap(nums[maxi],nums[i]);
        }
    }
};