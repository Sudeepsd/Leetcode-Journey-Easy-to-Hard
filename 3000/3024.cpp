class Solution {
public:
    string triangleType(vector<int>& nums) {
        int a = nums[0], b = nums[1], c = nums[2];

        if (b + c <= a || a + c <= b || a + b <= c)
            return "none";

        if (a == b && b == c) 
            return "equilateral";

        if (a == b || b == c || a == c)
            return "isosceles";

        return "scalene";
    }
};

// Time Complexity: O(1)
// Space Complexity: O(1)