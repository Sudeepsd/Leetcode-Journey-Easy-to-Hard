class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int count = 0;

        for (auto x : batteryPercentages)
            if (x > count)
                ++count;

        return count;
    }
};

// Time Complexity: O(n), size of input array
// Space Complexity: O(1)