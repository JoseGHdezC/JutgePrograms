#include <iostream>

int main() { 
  int easter_day{0};
  int easter_month{0};
  int year{0};
  while (std::cin >> year) {
    int k = year / 100;
    int x = year % 19;
    int b = year % 4;
    int c = year % 7;
    int q = k / 4;
    int p = (13 + 8 * k) / 25;
    int y = (15 - p + k - q) % 30;
    int z = (19 * x + y ) % 30;
    int n = (4 + k - q) % 7;
    int e = (2 * b + 4 * c + 6 * z + n) % 7;
    if (z + e <= 9) {
      easter_day = 22 + z + e;
      easter_month = 3;
    } else if (z == 29 && e == 6) {
      easter_day = 19;
      easter_month = 4;
    } else if (z == 28 && e == 6 && x > 10) {
      easter_day = 18;
      easter_month = 4;
    } else {
      easter_day = z + e - 9;
      easter_month = 4;
    }
    std::cout << easter_day << "/" << easter_month << std::endl;
  }
  return 0;
}