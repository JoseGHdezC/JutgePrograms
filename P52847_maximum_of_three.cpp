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
  int aonumber = 0;
  std::cin >> aonumber;
  int max_number = number;
  if (max_number < onumber) {
    max_number = onumber;
  }
  if (max_number < aonumber) {
    max_number = aonumber;
  }
  std::cout << max_number << std::endl;
  return 0;
}