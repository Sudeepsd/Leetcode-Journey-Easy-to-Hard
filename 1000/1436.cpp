class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> start;

        for (auto& path : paths) // O(n)
            start.insert(path[0]);

        for (auto& path : paths) // O(n)
            if (!start.count(path[1]))
                return path[1];
        
        return "";
    }
};

// Time Complexity: O(n), size of input array
// Space Complexity: O(n), for the unordered_set