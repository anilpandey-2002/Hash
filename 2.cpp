class Solution
{
public:
  vector<int> findDisappearedNumbers(vector<int> &nums)
  {
    vector<int> a;

    for (const int n : nums)
    {
      const int index = abs(n) - 1;
      nums[index] = -abs(nums[index]);
    }

    for (int i = 0; i < nums.size(); ++i)
      if (nums[i] > 0)
        a.push_back(i + 1);

    return a;
  }
};
// Find All Numbers Disappeared in an Array