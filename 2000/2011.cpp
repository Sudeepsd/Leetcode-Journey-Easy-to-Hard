class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;

        for (auto op : operations) {
            ans += op[1] == '+' ? 1 : -1;
        }

        return ans;
    }
};

// Time Complexity: O(n), length of array
// Space Complexity: O(1)