class Solution
{
public
  int subarraySum(int[] nums, int k)
  {
    int a = 0;
    int b = 0;
    Map<Integer, Integer> count = new HashMap<>();
    count.put(0, 1);

    for (final int n : nums)
    {
      b += n;
      a += count.getOrDefault(b - k, 0);
      count.merge(b, 1, Integer::sum);
    }

    return a;
  }
}

// 560
//  Subarraysumequalk