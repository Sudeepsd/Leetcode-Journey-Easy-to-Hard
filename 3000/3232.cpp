class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum1 = 0, sum10 = 0;

        for (int x : nums) {
            if (x < 10) sum1 += x;
            else sum10 += x;
        }

        return sum1 != sum10;
    }
};

// Time Complexity: O(n), to iterate through array
// Space Complexity: O(1)