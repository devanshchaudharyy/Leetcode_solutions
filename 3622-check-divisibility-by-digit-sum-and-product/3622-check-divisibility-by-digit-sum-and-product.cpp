class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int prod = 1;
        int hehe = n;

        while (hehe != 0) {
            int digit = hehe % 10;
            sum += digit;          
            prod *= digit;     
            hehe /= 10; 
        }          

        int total = sum + prod;

        if (total == 0) return false;

        return (n % total == 0);
    }
};