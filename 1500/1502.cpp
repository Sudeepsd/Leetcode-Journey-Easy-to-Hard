class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n = arr.size();
        if (n <= 2) return true;

        int maxVal = INT_MIN, minVal = INT_MAX;
        for (int x : arr) {
            if (x > maxVal) maxVal = x;
            if (x < minVal) minVal = x;
        }

        // If diff is not integer, it is not possible
        if ((maxVal - minVal) % (n - 1) != 0) return false;
        
        int diff = (maxVal - minVal) / (n - 1);
        if (diff == 0) {
            for (int x : arr)
                if (x != minVal) 
                    return false;
            return true;
        }

        // Place each element at its "correct" position
        for (int i = 0; i < arr.size(); ++i) {
            while (true) {
                ;
                if ((arr[i] - minVal) % diff != 0) return false; // not fitting AP
                int pos = (arr[i] - minVal) / diff;
                if (pos < 0 || pos >= n) return false; // out of range
                if (pos == i) break;    // correctly placed
                if (arr[i] == arr[pos]) return false; // Duplicate
                swap(arr[i], arr[pos]);
            }
        }

        return true;
    }
};

// Time Complexity: O(n), size of input array
// Space Complexity: O(1)

// Alternatively, you can sort the array in O(n log n) time and O(1) space complexities,
// then verify whether the difference between each pair of consecutive elements
// matches the difference of the first two elements