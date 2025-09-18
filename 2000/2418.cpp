class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> people;

        for (int i = 0; i < names.size(); ++i) // O(n)
            people.push_back({heights[i], names[i]});

        sort(people.rbegin(), people.rend()); // O(n log n)

        vector<string> ans;
        for (auto& [_, v] : people) // O(n)
            ans.push_back(v);

        return ans;
    }
};

// Time Complexity: O(n log n)
// Space Complexity: O(n)