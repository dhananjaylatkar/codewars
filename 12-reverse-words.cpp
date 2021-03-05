#include <iostream>
#include <numeric>
#include <string>
using namespace std;
/**
 * Tips -
 * Use std::stringstream to break words easily.
 * https://www.geeksforgeeks.org/stringstream-c-applications/
 * Use std::reverse for reversing
 * std::reverse(buff.begin(), buff.end());
**/
string spinWords(const string &str) {
  string res;
  int posStart = 0;
  int posEnd = str.find(' ');
  string subStr;
  while (posEnd != string::npos) {
    subStr = str.substr(posStart, posEnd-posStart);
    if (subStr.length() > 4) {
      string rs = accumulate(subStr.rbegin(), subStr.rend(), string());
      res += rs + " ";
    } else {
      res += subStr + " ";
    }
    posStart = posEnd + 1;
    posEnd = str.find(' ', posEnd + 1);
  }
  subStr = str.substr(posStart);
  if (subStr.length() > 4) {
    string rs = accumulate(subStr.rbegin(), subStr.rend(), string());
    res += rs;
  } else {
    res += subStr;
  }
  cout << res << '\n';
  return res;
} // spinWords

int main() { spinWords("Dhananjay Mihir hi"); }
