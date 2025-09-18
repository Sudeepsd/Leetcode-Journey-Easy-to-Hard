class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int ans = 0;

        for (int num : nums) { // O(n)
            int maxDigit = 0;
            int curr = 0;
            while (num > 0) { // O(log10 x)
                maxDigit = max(maxDigit, num % 10);
                num /= 10;
                curr = curr * 10 + 1;
            }
            ans += curr * maxDigit;
        }

        return ans;
    }
};

// Time Complexity: O(n log10 x), n = size of input array, x = max number in array
// Space Complexity: O(1)