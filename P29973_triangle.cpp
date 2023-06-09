#include <iostream>

int main() {
  unsigned line_number{0};
  unsigned asterisk_number{1};
  std::cin >> line_number;
  for (int i = 0; i < line_number; ++i) {
    for (int j = 0; j < asterisk_number; ++j) {
      std::cout << "*";
    }
    std::cout << std::endl;
    ++asterisk_number;
  }
  return 0;
}