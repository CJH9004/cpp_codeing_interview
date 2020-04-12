// 在一个二维数组中（每个一维数组的长度相同），每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

class Solution {
 public:
  bool Find(int target, vector<vector<int> > array) {
    int r = array.size() - 1, c = 0;
    while (r >= 0 && c < array[r].size()) {
      if (target > array[r][c]) {
        ++c;
      } else if (target < array[r][c]) {
        --r;
      } else {
        return true;
      }
    }
    return false;
  }
};

int main() {
  int tmp[4][4] = {{1, 2, 8, 9}, {2, 4, 9, 12}, {4, 7, 10, 13}, {6, 8, 11, 15}};
  vector<vector<int> > array1(0, vector<int>(0));
  vector<vector<int> > array2(4, vector<int>(4));
  for (int i = 0; i < array2.size(); ++i) {
    for (int j = 0; j < array2[i].size(); ++j) {
      array2[i][j] = tmp[i][j];
    }
  }

  Solution s;
  cout << s.Find(7, array1) << endl;
  cout << s.Find(7, array2) << endl;
}