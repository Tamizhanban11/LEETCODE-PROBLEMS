class Solution {
 public:
  string countAndSay(int n) {
    string res = "1";

    while (--n > 0) {
      string nnn;
      for (int i = 0; i < res.length(); ++i) {
        int count = 1;
        while (i + 1 < res.length() && res[i] == res[i + 1]) {
          ++count;
          ++i;
        }
        nnn += to_string(count) + res[i];
      }
      res = std::move(nnn);
    }

    return res;
  }
};