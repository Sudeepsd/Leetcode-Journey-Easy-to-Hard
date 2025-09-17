class Solution {
public:
    int commonFactors(int a, int b) {
        int ans = 0;
        int g = gcd(a, b);

        for (int i = 1; i * i <= g; ++i)
            if (g % i == 0)
                ans += i * i == g ? 1 : 2;

        return ans;
    }
};

// Time Complexity: O(√gcd(a,b)) ≡ O(√log(min(a,b)))
// Space Complexity: O(1)