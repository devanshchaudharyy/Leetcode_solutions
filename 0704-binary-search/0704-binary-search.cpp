#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (nums[mid] == target) {
                return mid; // Return the index
            } 
            else if (nums[mid] < target) {
                s = mid + 1; // Target is in the right half
            } 
            else {
                e = mid - 1; // Target is in the left half
            }
        }

        return -1; // Target not found
    }
};