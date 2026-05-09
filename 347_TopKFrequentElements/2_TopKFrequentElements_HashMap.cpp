class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> freq;
        
        // Step 1: count frequencies
        for (int num : nums) {
            freq[num]++;
        }

        // Step 2: min heap
        priority_queue<
            std::pair<int,int>, 
            std::vector<std::pair<int,int>>, 
            greater<std::pair<int,int>>
        > pq;

        // Step 3: keep only top k
        for (auto &p : freq) {
            pq.push({p.second, p.first});
            
            if (pq.size() > k) {
                pq.pop();
            }
        }

        // Step 4: extract result
        vector<int> result;
        while (!pq.empty()) {
            result.push_back(pq.top().second);
            pq.pop();
        }

        return result;
    }
};