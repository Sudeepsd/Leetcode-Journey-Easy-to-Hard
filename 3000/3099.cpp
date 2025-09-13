class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int digitSum = 0;
        int temp = x;

        while (x > 0) {
            int digit = x % 10;
            digitSum += digit;
            x /= 10;
        }

        return temp % digitSum == 0 ? digitSum : -1; 
    }
};

// Time Complexity: O(log(x)), proportional to number of digits in x
// Space Complexity: O(1)       