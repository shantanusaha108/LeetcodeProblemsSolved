#include<iostream>
#include<string>



class Solution {
public:
    struct Node {
        long long cnt;
        long long wav;
    };

    std::string s;

    Node memo[20][11][11][3];
    bool vis[20][11][11][3];

    Node dfs(int pos,
             int prev2,
             int prev1,
             int len,
             bool tight) {

        if (pos == s.size()) {
            return {1, 0};
        }

        if (!tight && vis[pos][prev2][prev1][len]) {
            return memo[pos][prev2][prev1][len];
        }

        int limit = tight ? s[pos] - '0' : 9;

        long long totalCnt = 0;
        long long totalWav = 0;

        for (int d = 0; d <= limit; d++) {

            bool ntight = tight && (d == limit);

            int nPrev2 = prev2;
            int nPrev1 = prev1;
            int nLen = len;

            long long extra = 0;

            if (len == 0) {

                if (d == 0) {
                    Node child =
                        dfs(pos + 1,
                            10,
                            10,
                            0,
                            ntight);

                    totalCnt += child.cnt;
                    totalWav += child.wav;
                    continue;
                }

                nPrev1 = d;
                nLen = 1;

            } else if (len == 1) {

                nPrev2 = prev1;
                nPrev1 = d;
                nLen = 2;

            } else {

                if ((prev1 > prev2 && prev1 > d) ||
                    (prev1 < prev2 && prev1 < d))
                    extra = 1;

                nPrev2 = prev1;
                nPrev1 = d;
                nLen = 2;
            }

            Node child =
                dfs(pos + 1,
                    nPrev2,
                    nPrev1,
                    nLen,
                    ntight);

            totalCnt += child.cnt;
            totalWav += child.wav + extra * child.cnt;
        }

        Node ans = {totalCnt, totalWav};

        if (!tight) {
            vis[pos][prev2][prev1][len] = true;
            memo[pos][prev2][prev1][len] = ans;
        }

        return ans;
    }

    long long solve(long long x) {
        if (x <= 0) return 0;

        s = to_string(x);

        memset(vis, 0, sizeof(vis));

        return dfs(0, 10, 10, 0, true).wav;
    }

    long long totalWaviness(long long num1, long long num2) {
        return solve(num2) - solve(num1 - 1);
    }
};



int main(){
    return 0;
}