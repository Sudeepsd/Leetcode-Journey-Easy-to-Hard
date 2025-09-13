class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> freq;

        for (int i : arr) {
            ++freq[i];
        }

        int ans = -1;
        for (auto& [key, value] : freq) {
            if (key == value) {
                ans = max(ans, key);
            }
        }

        return ans;
    }
};

// Time Complexity: O(n), size of input array
// Space Complexity: O(n), for the frequency map