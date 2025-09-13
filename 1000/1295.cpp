class Solution {
public:
    int findNumbers(vector<int>& nums) {
        return count_if(nums.begin(), nums.end(), [](int x){
            int digits = 0;
            while (x > 0) {
                x /= 10;
                ++digits;
            }
            return digits % 2 == 0;
        });
    }
};

// Time Complexity: O(n), input array
// Space Complexity: O(1)