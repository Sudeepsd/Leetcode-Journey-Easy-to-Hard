class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans(candies.size());
        int maxCandies = *max_element(candies.begin(), candies.end()); // O(n)

        for (int i = 0; i < candies.size(); ++i) { // O(n) - for loop
            ans[i] = candies[i] + extraCandies >= maxCandies; // O(1)
        }

        return ans;
    }
};

// Time Complexity: O(n), size of input array
// Space Complexity: O(1)