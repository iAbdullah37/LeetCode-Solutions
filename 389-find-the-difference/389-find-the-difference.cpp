class Solution {
public:
  char findTheDifference(string s, string t) {
    char tot = 0;
    for (int i = 0; i < s.size(); i++) {
      tot += t[i];
      tot -= s[i];
    }
    tot += t.back();
    return tot;
  }
};