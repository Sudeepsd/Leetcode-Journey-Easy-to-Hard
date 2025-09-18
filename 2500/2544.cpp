class Solution {
public:
    int alternateDigitSum(int n) {
        // If number of digits is odd, first digit is added, else subtracted
        // Note: number of digits = log10(n) + 1
        int sign = (int)log10(n) % 2 == 0 ? 1 : -1;

        int sum = 0;
        while (n > 0) { // O(log10 n)
            sum += (n % 10) * sign;
            sign *= -1;
            n /= 10;
        }

        return sum;
    }
};

// Time Complexity: O(log10 n)
// Space Complexity: O(1)