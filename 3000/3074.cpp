class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int apples = accumulate(apple.begin(), apple.end(), 0); // O(n)
        sort(capacity.rbegin(), capacity.rend()); // O(n log n)

        int sum = 0;
        for (int i = 0; i < capacity.size(); ++i) { // O(n)
            sum += capacity[i];
            if (sum >= apples)
                return i + 1;
        }   

        return 0;
    }
};

// Time Complexity: O(n log n)
// Space Complexity: O(1)