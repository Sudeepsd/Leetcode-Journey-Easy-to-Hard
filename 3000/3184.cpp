class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        vector<int> freq(24, 0);
        int ans = 0;

        for (int h : hours) {
            int rem = h % 24;
            int need = (24 - rem) % 24;
            ans += freq[need];
            ++freq[rem];
        }

        return ans;
    }
};

// Time Complexity: O(n), size of input array
// Space Complexity: O(1), array of constant size