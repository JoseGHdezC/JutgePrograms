#include <iostream>
#include <vector>

void BuscaNumero(const unsigned posicion, const std::vector<int>& vector) {
  if (posicion < vector.size()) {
    std::cout << "At the position " << posicion + 1 << " there is a(n) " << vector[posicion] << "." << std::endl;
  }
}

int main() {
  unsigned posicion{0};
  int numero{0};
  std::vector<int> secuencia_numeros;
  std::cin >> posicion;
  --posicion;
  while (std::cin >> numero) {
    secuencia_numeros.emplace_back(numero);
  }
  BuscaNumero(posicion, secuencia_numeros);
  return 0;
}