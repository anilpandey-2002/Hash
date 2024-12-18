class Solution
{
public:
  bool checkSubarraySum(vector<int> &nums, int k)
  {
    int a = 0;
    unordered_map<int, int> b{{0, -1}};

    for (int i = 0; i < nums.size(); ++i)
    {
      a += nums[i];
      if (k != 0)
        a %= k;
      if (const auto it = b.find(a);
          it != b.cend())
      {
        if (i - it->second > 1)
          return true;
      }
      else
      {

        b[a] = i;
      }
    }

    return false;
  }
}; // 523
// Continuous Subarray Sum