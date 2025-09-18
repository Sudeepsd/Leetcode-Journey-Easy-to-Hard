class Solution {
public:
    int maximum69Number (int num) {
        string str = to_string(num); // O(n)

        for (int i = 0; i < str.length(); ++i) { // O(n)
            if (str[i] == '6') {
                str[i] = '9';
                break;
            }
        }

        return stoi(str); // O(n)
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n), for string