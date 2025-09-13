class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int ans = 0;

        for (int i = 0; i < startTime.size(); ++i) {
            if (startTime[i] <= queryTime && queryTime <= endTime[i])
                ++ans;
        }

        return ans;
    }
};

// Time Complexity: O(n), size of input array
// Space Complexity: O(1)