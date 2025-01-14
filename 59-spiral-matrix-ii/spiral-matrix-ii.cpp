class Solution {
 public:
  vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> rez(n, vector<int>(n));
    int count = 1;

    for (int mn = 0; mn < n / 2; ++mn) {
      const int mx = n - mn - 1;
      for (int i = mn; i < mx; ++i)
        rez[mn][i] = count++;
      for (int i = mn; i < mx; ++i)
        rez[i][mx] = count++;
      for (int i = mx; i > mn; --i)
        rez[mx][i] = count++;
      for (int i = mx; i > mn; --i)
        rez[i][mn] = count++;
    }

    if (n % 2 == 1)
      rez[n / 2][n / 2] = count;

    return rez;
  }
};