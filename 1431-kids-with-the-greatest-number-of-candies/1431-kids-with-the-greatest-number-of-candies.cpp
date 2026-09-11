class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxcandy = 0;
        for (int i = 0; i < candies.size(); i++) {
            maxcandy = max(maxcandy, candies[i]);
        }
        vector<bool> result;
        for(int i = 0 ; i<candies.size() ; i++){
            if(candies[i]+extraCandies >= maxcandy){
                result.push_back(true);
            }
            else {
                result.push_back(false);
            }
        }
        return result;
    }
};