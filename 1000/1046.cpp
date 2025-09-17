class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        // O(n), building heap
        priority_queue<int> pq(stones.begin(), stones.end());

        // O(n), iterating through heap
        while (pq.size() > 1) {
            int a1 = pq.top(); pq.pop();
            int a2 = pq.top(); pq.pop();

            // O(log n), to push
            if (a1 != a2) pq.push(a1 - a2);
        }

        return pq.empty() ? 0 : pq.top();
    }
};

// Time Complexity: O(n log n), for pushing O(log n) repeated atleast n times
// Space Complexity: O(n), for heap storage