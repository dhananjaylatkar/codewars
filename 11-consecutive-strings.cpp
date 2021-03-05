#include <iostream>
#include <string>
#include <vector>

using namespace std;

class LongestConsec {
public:
  static std::string longestConsec(std::vector<std::string> &strarr, int k) {
    if (strarr.size() == 0 || k > strarr.size() || k <= 0){
      return "";
    }
    string res;
    unsigned long maxCount = 0;
    for (unsigned long i = 0; i < strarr.size() - k + 1; i++) {
      unsigned long tmpCount = 0;
      for (unsigned long j = i; j < i + k; j++) {
        tmpCount += strarr[j].length();
      }
      if (tmpCount > maxCount) {
        maxCount = tmpCount;
        string tmpRes;
        for (unsigned long j = i; j < i + k; j++) {
          tmpRes += strarr[j];
        }
        res = tmpRes;
      }
    }
    cout << res << endl;
    return res;
  }
  /**
   * Solution using std lib. (voted best on codewars)
   static std::string longestConsec(const std::vector<std::string>& strings, int k) {
      k = std::max(k, 0);
      std::string longest;
      for (size_t i = k; i <= strings.size(); i += 1) {
        auto begin = std::next(strings.begin(), i - k);
        auto end = std::next(begin, k);
        std::string s = std::accumulate(begin, end, std::string());
        if (s.length() > longest.length()) {
          longest = s;
        }
      }
      return longest;
    }
  **/
};

int main() {
  LongestConsec ex;
  vector<string> str = {"zone", "abigail", "theta", "form",
                        "libe", "zas",     "theta", "abigail"};
  vector<string> str1 = {
      "ejjjjmmtthh",
      "zxxuueeg",
      "aanlljrrrxx",
      "dqqqaaabbb",
      "oocccffuucccjjjkkkjyyyeehh",
  };
  ex.longestConsec(str1, 6);
  return 0;
}
