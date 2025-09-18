class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> index;

        for (int i = 0; i < arr2.size(); ++i) // O(m)
            index[arr2[i]] = i + 1;

        auto cmp = [&](int a, int b) {
            int aIdx = index.count(a);
            int bIdx = index.count(b);

            if (aIdx && bIdx) return index[a] < index[b];
            if (aIdx) return true;
            if (bIdx) return false;
            return a < b;
        };

        sort(arr1.begin(), arr1.end(), cmp); // O(n log n)
        return arr1;
    }
};

// Time Complexity: O(m + n log n), n = size of arr1, m = size of arr2
// Space Complexity: O(1)