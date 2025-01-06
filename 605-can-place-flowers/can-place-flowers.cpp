class Solution {
 public:
  bool canPlaceFlowers(vector<int>& bed, int count) {
    if (count == 0)
      return true;

    for (int i = 0; i < bed.size(); ++i)
      if (bed[i] == 0 && (i == 0 || bed[i - 1] == 0) &&
          (i == bed.size() - 1 || bed[i + 1] == 0)) {
        bed[i] = 1;
        if (--count == 0)
          return true;
      }

    return false;
  }
};
