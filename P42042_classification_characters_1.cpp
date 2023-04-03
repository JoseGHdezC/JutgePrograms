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
  char letter;
  std::cin >> letter;
  if (static_cast<int>(letter) >= static_cast<int>('A') && static_cast<int>(letter) <= static_cast<int>('Z')) {
    std::cout << "uppercase" << std::endl;
  }
  if (static_cast<int>(letter) >= static_cast<int>('a') && static_cast<int>(letter) <= static_cast<int>('z')) {
    std::cout << "lowercase" << std::endl;
  }
  if (static_cast<int>(letter) >= static_cast<int>('A') && static_cast<int>(letter) <= static_cast<int>('Z') 
      || static_cast<int>(letter) >= static_cast<int>('a') && static_cast<int>(letter) <= static_cast<int>('z')) {
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' 
        || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
      std::cout << "vowel" << std::endl;
    } else {
      std::cout << "consonant" << std::endl;
    }
  }
  return 0;
}