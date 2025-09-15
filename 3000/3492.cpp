class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        return min(n * n, maxWeight / w);
    }
};

// Time Complexity: O(1)
// Space Complexity: O(1)