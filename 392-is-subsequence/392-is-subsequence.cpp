class Solution {
public:
  bool isSubsequence(string s, string t) {
    int id = 0;
    for (int i = 0; i < t.size(); i++) {
      if (s[id] == t[i]) id++;
    }
    return (id == s.size());
  }
};