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
  int table = 0;
  //std::cout << "Introduce multiplication table to show: ";
  do {
    std::cin >> table;
  } while (table < 1 || table > 9);
  //std::cout << "Table of " << table << std::endl;
  for (int i = 1; i <= 10; ++i) {
    std::cout << table << "*" << i << " = " << table * i << std::endl;
  }
  return 0;
}