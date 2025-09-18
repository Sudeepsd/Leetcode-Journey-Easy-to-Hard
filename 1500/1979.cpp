class Solution {
public:
    int findGCD(vector<int>& nums) {
        int largest = INT_MIN, smallest = INT_MAX;

        for (int x : nums) { // O(n)
            if (x > largest) largest = x;
            if (x < smallest) smallest = x;
        }

        return gcd(largest, smallest); // O(log(smallest));
    }
};

// Time Complexity: O(n + log(min))
// Space Complexity: O(1)