class Solution {
public:
    int maxDepth(string s) {
        int currentdpt = 0 ;
        int maxd = 0;
        for(char c : s){
            if(c == '('){
                currentdpt++;
                maxd = max(maxd , currentdpt);
            }
            else if(c == ')'){
                currentdpt--;
            }
        }
        return maxd;
    }
};