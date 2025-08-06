class Solution {
  public:
    void print_divisors(int n) {
        vector<int> result;

        for (int i = 1; i * i <= n; ++i) {
            if (n % i == 0) {
                result.push_back(i);
                if (i != n / i) {
                    result.push_back(n / i);
                }
            }
        }

        sort(result.begin(), result.end());

        for (int i = 0; i < result.size(); ++i) {
            cout << result[i];
            if (i != result.size() - 1) cout << " ";
        }
    }
};
