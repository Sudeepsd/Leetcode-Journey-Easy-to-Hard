class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 1, right = arr.size() - 2; // Skip first and last element

        while (left <= right) { // O(log n), Binary search
            int mid = left + (right - left) / 2;

            if (arr[mid - 1] < arr[mid] && arr[mid + 1] < arr[mid])
                return mid;

            if (arr[mid - 1] < arr[mid])
                left = mid + 1; // Search right half
            else
                right = mid - 1; // Search left half
        }

        return -1;
    }
};

// Time Complexity: O(log n), Binary search over n elements
// Space Complexity: O(1)