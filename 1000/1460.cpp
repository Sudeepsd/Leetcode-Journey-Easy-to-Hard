class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int, int> freq;

        for (int i = 0; i < target.size(); ++i) {
            ++freq[target[i]];
            --freq[arr[i]];
        }

        for (auto p : freq)
            if (p.second != 0)
                return false;

        return true;
    }
};

// Time Complexity: O(n), size of input array
// Space Complexity: O(n), size of unordered_map

// Alternatively, you can sort and compare the two arrays.
// Although sorting has a time complexity of O(n log n), it is efficient enough
// for constraints where target.length <= 1000.