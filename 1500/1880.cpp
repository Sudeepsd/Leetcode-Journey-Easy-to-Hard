class Solution {
private:
    int strToNum(string word) { // O(n)
        int ans = 0;
        for (int i = 0; i < word.length(); ++i) {
            ans *= 10;
            ans += word[i] - 'a';
        }
        return ans;
    }

public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        return strToNum(firstWord) + strToNum(secondWord) == strToNum(targetWord);
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)