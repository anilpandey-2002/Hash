class Solution
{
public:
  int subarraysWithKDistinct(vector<int> &nums, int k)
  {
    return subarrayWithAtMostKDistinct(nums, k) -
           subarrayWithAtMostKDistinct(nums, k - 1);
  }

private:
  int subarrayWithAtMostKDistinct(const vector<int> &nums, int k)
  {
    int a = 0;
    vector<int> count(nums.size() + 1);

    for (int i = 0, j = 0; j < nums.size(); ++j)
    {
      if (++count[nums[j]] == 1)
        --k;
      while (k == -1)
        if (--count[nums[i++]] == 0)
          ++k;
      a += j - i + 1; // nums[i..j], nums[i + 1..j], ..., nums[j]
    }

    return a;
  }
};
// 992
//  SubarrayWithDifferentK