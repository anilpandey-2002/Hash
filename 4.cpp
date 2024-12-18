class Solution
{
public:
  bool isIsomorphic(string s, string t)
  {
    vector<int> a(128);
    vector<int> b(128);

    for (int i = 0; i < s.length(); ++i)
    {
      if (a[s[i]] != b[t[i]])
        return false;
      a[s[i]] = i + 1;
      b[t[i]] = i + 1;
    }

    return true;
  }
}; // 205
// Isomorphicstring