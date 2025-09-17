vector<int> anagramMapping(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, stack<int>> mapping;

    for (int i = 0; i < nums1.size(); ++i) 
        mapping[nums2[i]].push(i);

    for (int i = 0; i < nums1.size(); ++i) {
        int val = nums1[i];
        nums1[i] = mapping[val].top();
        mapping[val].pop();
    }

    return nums1;
}

// Time Complexity: O(n), size of input array
// Space Complexity: O(n), for unordered_map