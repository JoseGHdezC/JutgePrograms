#include <iostream>
#include <vector>

//Necesario para dar el resultado en el orden correcto. e.g. 00001 -> 10000
//void ReverseHexadecimal(std::vector<unsigned>& original, std::vector<unsigned>& reversed) {
//  for (int i = original.size() - 1; i >= 0; --i) {
//    reversed.emplace_back(original[i]);
//  }
//}

void DecimalToHexadecimal(unsigned number, std::vector<unsigned>& hexadecimal) {
  if (number == 0) {
    hexadecimal.emplace_back(0);
  }
  while (number > 0) {
    hexadecimal.emplace_back(number % 16);
    number /= 16;
  }
}

void PrintVector(std::vector<unsigned>& vector) {
  for (int i = 0; i < vector.size(); ++i) {
    switch (vector[i]) {
      case 10:
        std::cout << "A";
        break;
      case 11:
        std::cout << "B";
        break;
      case 12:
        std::cout << "C";
        break;
      case 13:
        std::cout << "D";
        break;
      case 14:
        std::cout << "E";
        break;
      case 15:
        std::cout << "F";
        break;
      default:
        std::cout << vector[i];
    }
  }
  std::cout << std::endl;
}

int main() {
  std::vector<unsigned> hexadecimal_number;
  std::vector<unsigned> reversed_hexadecimal_number;
  unsigned decimal_number{0};
  std::cin >> decimal_number;
  DecimalToHexadecimal(decimal_number, hexadecimal_number);
  PrintVector(hexadecimal_number);
  //ReverseHexadecimal(hexadecimal_number, reversed_hexadecimal_number);
  //PrintVector(reversed_hexadecimal_number);
  return 0;
}