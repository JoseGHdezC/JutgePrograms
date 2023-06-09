/**
 * @author: José Gregorio Hernández Cruz
 * @email: alu0101545820@ull.edu.es
 * @date: 09/06/2023
 * @brief: program that tells if a year is or is not a leap year
 * @bug:
 * @see:
 */

#include <iostream>

bool is_leap_year(int year) {
  bool flag = false;
  if (year % 100 == 0) {
    year = year / 100;
  }
  if (year % 4 == 0) {
    flag = true;
  }
  return flag;
}

int main() {
  int year{0};
  std::cin >> year;
  if (year >= 1800 && year <= 9999) {
    std::cout << ((is_leap_year(year)) ? "YES" : "NO") << std::endl;
  }
  return 0;
}