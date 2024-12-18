class Solution
{
public:
  int maxSubarrayLength(vector<int> &nums, int k)
  {
    int a = 0;
    unordered_map<int, int> c;

    for (int i = 0, j = 0; j < nums.size(); ++j)
    {
      ++c[nums[j]];
      while (c[nums[j]] == k + 1)
        --c[nums[i++]];
      a = max(a, j - i + 1);
    }

    return a;
  }
};
// 2958
//  Length of Longest Subarray With at Most K Frequency