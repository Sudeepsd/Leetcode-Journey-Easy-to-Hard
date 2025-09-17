class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size() / 4;

        for (int i = 0; i + n < arr.size(); ++i) // O(n)
            if (arr[i] == arr[i + n])
                return arr[i];

        return -1;
    }
};

// Time Complexity: O(n), n = size of input array
// Space Complexity: O(1)