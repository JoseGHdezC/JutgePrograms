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

int sum_divisors(int number) {
  int sum_result = 0;
  int i;
  if (number >= 1 && number <= 100000000) {
    for (i = 1; (i * i) < number; ++i) {
      if (number % i == 0) {
        sum_result = sum_result + i;
      }
    }
    for (; i >= 1; --i) {
      if ((number % i == 0) && (number / i != (i - 1))) {
        sum_result = sum_result + number / i;
      } 
    }
  }
  return sum_result;
}

int main() {
  int number = 0;
  std::cout << "Introduce a number: ";
  std::cin >> number;
  std::cout << "Result is: " << sum_divisors(number) << std::endl;
  return 0;
}