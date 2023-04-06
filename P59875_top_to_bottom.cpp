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
  int top_number = 0;
  int bottom_number = 0;
  //std::cout << "Introduce top number: ";
  std::cin >> top_number;
  //std::cout << "Introduce bottom number: ";
  std::cin >> bottom_number;
  if (top_number > bottom_number) {
    for (int i = top_number; i >= bottom_number; --i) {
      std::cout << i << std::endl;
    }
  } else if (top_number < bottom_number) {
    for (int i = bottom_number; i >= top_number; --i) {
      std::cout << i << std::endl;
    }
  } else {
    std::cout << top_number << std::endl;
  }
  
  return 0;
}