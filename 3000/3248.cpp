class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int pos = 0;
        for (auto x : commands) {
            if (x == "LEFT") --pos;
            else if (x == "RIGHT") ++pos;
            else if (x == "UP") pos -= n;
            else pos += n;
        }

        return pos;
    }
};

// Time Complexity: O(n), size of input array
// Space Complexity: O(1)