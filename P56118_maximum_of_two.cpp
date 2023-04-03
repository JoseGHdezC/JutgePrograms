/**
 * @author: José Gregorio Hernández Cruz
 * @date:
 * @email:
 * @file:
 * @brief:
 * @bug: Needs revision
 * @see:
 */

#include <iostream>

int main() {
  int number = 0;
  std::cin >> number;
  int onumber = 0;
  std::cin >> onumber;
  int max_number = number;
  if (max_number < onumber) {
    max_number = onumber;
  }
  std::cout << max_number << std::endl;
  return 0;
}