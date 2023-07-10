#include <iostream>
#include <string>

int main() {
  int rows{0};
  int columns{0};
  std::string whole_row = "";
  int total{0};
  std::cin >> rows >> columns;
  for (int i = 0; i < rows; ++i) {
    std::cin >> whole_row;
    for (int j = 0; j < columns; ++j) {
      int subnumber = whole_row[j] - '0';
      total += subnumber;
    }
  }
  std::cout << total << std::endl;
  return 0;
}