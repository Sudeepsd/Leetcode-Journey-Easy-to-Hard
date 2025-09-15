class Solution {
public:
    int averageValue(vector<int>& nums) {
        int count = 0, sum = 0;

        for (int x : nums)
            if (x % 6 == 0) {
                sum += x;
                ++count;
            }

        return count == 0 ? 0 : sum / count;
    }
};

// Time Complexity: O(n), size of input array
// Space Complexity: O(1)