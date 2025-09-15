class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        return count_if(hours.begin(), hours.end(), [target](int x){
            return x >= target;
        });
    }
};

// Time Complexity: O(n), size of input array
// Space Complexity: O(1)