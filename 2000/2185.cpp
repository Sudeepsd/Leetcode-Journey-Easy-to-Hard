class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;

        for (auto x : words) {
            if (x.find(pref) == 0) {
                ++count;
            }
        }

        return count;
    }
};

// Time Complexity: O(n), size of input array
// Space Complexity: O(1)