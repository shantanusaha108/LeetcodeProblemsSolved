class BIT {
    vector<int> bit;

public:
    BIT(int n) : bit(n + 1, 0) {}

    inline void add(int idx) {
        while (idx < bit.size()) {
            ++bit[idx];
            idx += idx & -idx;
        }
    }

    inline int sum(int idx) {
        int ans = 0;
        while (idx > 0) {
            ans += bit[idx];
            idx -= idx & -idx;
        }
        return ans;
    }
};

class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {

        int n = nums.size();

        int SHIFT = n + 1;

        BIT bit(2 * n + 5);

        long long ans = 0;
        int pref = 0;

        bit.add(SHIFT); 

        for (int x : nums) {

            pref += (x == target ? 1 : -1);

            int idx = pref + SHIFT;

            ans += bit.sum(idx - 1);

            bit.add(idx);
        }

        return ans;
    }
};