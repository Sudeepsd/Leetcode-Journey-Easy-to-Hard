class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int ans = 0;
        int mask = (1 << ('a' - 'a')) 
                 | (1 << ('e' - 'a')) 
                 | (1 << ('i' - 'a'))
                 | (1 << ('o' - 'a')) 
                 | (1 << ('u' - 'a'));

        while (left <= right) { // O(right - left + 1)
            int first = words[left][0] - 'a';
            int last = words[left].back() - 'a';

            if ((mask & (1 << first)) && (mask & (1 << last)))
                ++ans;

            ++left;
        }

        return ans;
    }
};

// Time Complexity: O(n), n = right - left + 1
// Space Complexity: O(1)