class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        long long totalS = accumulate(nums.begin(),nums.end(),0);
        long long leftS = 0 ;
        for(int i = 0 ; i< n ; ++i){
            if(leftS == totalS - leftS - nums[i]){
                return i ;
            }
            leftS += nums[i];
        }
        return -1 ;
    }
};