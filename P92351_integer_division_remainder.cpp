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
  int dividend = 1;
  int divisor = 1;
  //std::cout << "Introduce dividend: ";
  std::cin >> dividend;
  //std::cout << "Introduce divisor: ";
  do {
  std::cin >> divisor;
  //if (divisor == 0) {
  //  std::cout << "Divisor must be different from 0" << std::endl;
  //}
  } while (divisor == 0);
  std::cout //<< dividend << " / " << divisor << " = " 
            << dividend / divisor << " " 
            //<< dividend << " % " << divisor << " = "
            << dividend % divisor << std::endl;
  return 0;
}