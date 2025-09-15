class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0, product = 1;

        int temp = n;
        while (temp > 0) {
            int digit = temp % 10;
            temp /= 10;
            sum += digit;
            product *= digit;
        }

        return n % (sum + product) == 0;
    }
};

// Time Complexity: O(log n), number of digits in n
// Space Complexity: O(1)