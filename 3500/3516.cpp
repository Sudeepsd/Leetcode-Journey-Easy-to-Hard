class Solution {
public:
    int findClosest(int x, int y, int z) {
        if (abs(z - x) < abs(z - y))
            return 1;
        else if (abs(z - x) > abs(z - y))
            return 2;
        return 0;
    }
};

// Time Complexity: O(1)
// Space Complexity: O(1)