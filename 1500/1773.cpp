class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int ans = 0;
        int key = ruleKey == "type" ? 0 : ruleKey == "color" ? 1 : 2;

        for (auto& x : items) // O(n)
            if (x[key] == ruleValue)
                ++ans;

        return ans;
    }
};

// Time Complexity: O(n), size of input array
// Space Complexity: O(1)