#include <iostream>
#include <vector>

//Necesario para dar el resultado en el orden correcto. e.g. 00001 -> 10000
//void ReverseBinary(std::vector<unsigned>& original, std::vector<unsigned>& reversed) {
//  for (int i = original.size() - 1; i >= 0; --i) {
//    reversed.emplace_back(original[i]);
//  }
//}

//Se introducen los bits en orden inverso. e.g. 16 -> 00001
void DecimalToBinary(unsigned number, std::vector<unsigned>& binary) { 
  if (number == 0) {
    binary.emplace_back(0);
  }
  while (number > 0) {
    binary.emplace_back(number % 2);
    number /= 2;
  }
}

void PrintVector(std::vector<unsigned>& vector) {
  for (int i = 0; i < vector.size(); ++i) {
    std::cout << vector[i];
  }
  std::cout << std::endl;
}

int main() {
  std::vector<unsigned> binary_number;
  std::vector<unsigned> reversed_binary_number;
  unsigned decimal_number{0};
  std::cin >> decimal_number;
  DecimalToBinary(decimal_number, binary_number); 
  PrintVector(binary_number);
  //ReverseBinary(binary_number, reversed_binary_number);
  //PrintVector(reversed_binary_number);
  return 0;
}