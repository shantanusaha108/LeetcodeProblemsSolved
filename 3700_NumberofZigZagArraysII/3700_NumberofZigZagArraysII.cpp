class Solution {
public:
    static constexpr long long MOD = 1e9 + 7;
    using Matrix = vector<vector<long long>>;

    Matrix multiply(const Matrix& A, const Matrix& B) {
        int n = A.size();
        Matrix C(n, vector<long long>(n, 0));

        for (int i = 0; i < n; ++i) {
            for (int k = 0; k < n; ++k) {
                if (!A[i][k]) continue;

                for (int j = 0; j < n; ++j) {
                    if (!B[k][j]) continue;

                    C[i][j] =
                        (C[i][j] + A[i][k] * B[k][j]) % MOD;
                }
            }
        }

        return C;
    }

    Matrix power(Matrix base, long long exp) {
        int n = base.size();

        Matrix res(n, vector<long long>(n, 0));
        for (int i = 0; i < n; ++i)
            res[i][i] = 1;

        while (exp) {
            if (exp & 1)
                res = multiply(res, base);

            base = multiply(base, base);
            exp >>= 1;
        }

        return res;
    }

    int zigZagArrays(int n, int l, int r) {
        int m = r - l + 1;

        if (n == 1)
            return m;

        // n == 2 : only adjacent elements must differ
        if (n == 2)
            return 1LL * m * (m - 1) % MOD;

        int sz = 2 * m;

        // states:
        // 0..m-1       -> UP ending at x
        // m..2m-1      -> DOWN ending at x
        Matrix T(sz, vector<long long>(sz, 0));

        for (int x = 0; x < m; ++x) {

            // UP(x) -> DOWN(y), y < x
            for (int y = 0; y < x; ++y)
                T[m + y][x] = 1;

            // DOWN(x) -> UP(y), y > x
            for (int y = x + 1; y < m; ++y)
                T[y][m + x] = 1;
        }

        // Initial vector = all length-2 arrays
        vector<long long> init(sz, 0);

        for (int prev = 0; prev < m; ++prev) {
            for (int cur = 0; cur < m; ++cur) {
                if (prev == cur) continue;

                if (prev < cur)
                    init[cur]++;       // last move UP
                else
                    init[m + cur]++;   // last move DOWN
            }
        }

        Matrix P = power(T, n - 2);

        long long ans = 0;

        for (int i = 0; i < sz; ++i) {
            long long ways = 0;

            for (int j = 0; j < sz; ++j)
                ways = (ways + P[i][j] * init[j]) % MOD;

            ans = (ans + ways) % MOD;
        }

        return ans;
    }
};