class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long, int> freq;
        for (int x : nums) freq[x]++;

        int ans = 1;

        // Handle 1 separately
        if (freq.count(1)) {
            ans = max(ans, (freq[1] % 2) ? freq[1] : freq[1] - 1);
        }

        for (auto &[x, cnt] : freq) {
            if (x == 1) continue;

            long long cur = x;
            int len = 0;

            while (freq.count(cur) && freq[cur] >= 2) {
                len += 2; // use cur on both sides

                // If next value doesn't exist, current cannot be a pair
                if (cur > 31622LL) break; // cur*cur > 1e9

                long long nxt = cur * cur;
                if (!freq.count(nxt)) break;

                cur = nxt;
            }

            // If loop stopped because cur had < 2 copies,
            // it can serve as the center.
            if (freq.count(cur) && freq[cur] == 1)
                len += 1;
            else
                len -= 1; // last paired value becomes center

            ans = max(ans, len);
        }

        return ans;
    }
};