class Solution {
public:
    int minElement(vector<int>& nums) {
        int minVal = INT_MAX;
        for (auto x : nums) { // O(n)
            int sum = 0;
            while (x > 0) { // O(log10 x), number of digits in x
                sum += x % 10;
                x /= 10;
            }
            minVal = min(minVal, sum);
        }
        return minVal;
    }
};

// Time Complexity: O(n log10 x), n = input array size, x = max element in nums
// Space Complexity: O(1)