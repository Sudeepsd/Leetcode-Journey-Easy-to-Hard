class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        unordered_set<int> seen;

        for (int x : arr) // O(n)
            ++freq[x];

        for (auto& p : freq) { // O(n)
            if (seen.count(p.second)) 
                return false;
            seen.insert(p.second);
        }

        return true;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n), for unordered_set and unordered_map