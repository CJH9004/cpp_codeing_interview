// 请实现一个函数，将一个字符串中的每个空格替换成“%20”。例如，当字符串为We Are
// Happy.则经过替换之后的字符串为We%20Are%20Happy。
class Solution {
 public:
  void replaceSpace(char *str, int length) {
    int cnt = 0;
    char tmp[length];
    for (int i = 0; i < length; ++i) {
      tmp[i] = str[i];
      if (str[i] == ' ') {
        ++cnt;
      }
    }
    int j = 0;
    for (int i = 0; i < length; ++i) {
      if (tmp[i] == ' ') {
        str[j] = '%';
        str[j + 1] = '2';
        str[j + 2] = '0';
        j += 3;
      } else {
        str[j] = tmp[i];
        ++j;
      }
    }
    if (str[j - 1] != 0) {
      str[j] = 0;
    }
  }
};