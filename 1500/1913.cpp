class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int largest = INT_MIN, smallest = INT_MAX;
        int secondLargest = INT_MIN, secondSmallest = INT_MAX;

        for (auto num : nums) {
            if (num >= largest) {
                secondLargest = largest;
                largest = num;
            } else if (num >= secondLargest) {
                secondLargest = num;
            }

            if (num <= smallest) {
                secondSmallest = smallest;
                smallest = num;
            } else if (num <= secondSmallest) {
                secondSmallest = num;
            }
        }

        return (largest * secondLargest) - (smallest * secondSmallest);
    }
};

// Time Complexity: O(n), size of input array
// Space Complexity: O(1)

// Alternatively, you can sort and take the first two and last two elements.
// Although sorting has a time complexity of O(n log n), it is efficient enough
// for constraints where nums.size() <= 1e4.