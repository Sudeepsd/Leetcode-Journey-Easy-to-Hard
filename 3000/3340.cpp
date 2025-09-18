class Solution {
public:
    bool isBalanced(string num) {
        int evenSum = 0, oddSum = 0;

        for (int i = 0; i < num.length(); i += 2)
            evenSum += num[i] - '0';

        for (int i = 1; i < num.length(); i += 2)
            oddSum += num[i] - '0';

        return oddSum == evenSum;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)