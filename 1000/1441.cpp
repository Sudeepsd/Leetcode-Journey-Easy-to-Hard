class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int last = target.back();
        int idx = 0;

        for (int i = 1; i <= last; ++i) {
            ans.push_back("Push");

            if (i != target[idx]) 
                ans.push_back("Pop");
            else
                ++idx;
        }

        return ans;
    }
};

// Time Complexity: O(m), m = target.back()
// Space Complexity: O(1)