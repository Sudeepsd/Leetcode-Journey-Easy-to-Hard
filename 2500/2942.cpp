class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> indices;

        for (int i = 0; i < words.size(); ++i) // O(m), m = size of array
            if (words[i].find(x) != string::npos) // O(n), n = length of string
                indices.push_back(i);

        return indices;
    }
};

// Time Complexity: O(m * n), m = size of array, n = length of string
// Space Complexity: O(1)