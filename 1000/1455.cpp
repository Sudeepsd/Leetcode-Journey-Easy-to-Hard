class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        istringstream iss(sentence);
        string word;
    
        int n = searchWord.length(), idx = 1;
        while (iss >> word) {
            if (word.substr(0, n) == searchWord)
                return idx;
            ++idx;
        }

        return -1;
    }
};

// Time Complexity: O(n), number of words
// Space Complexity: O(1)
