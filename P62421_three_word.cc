#include <iostream>
#include <vector>
#include <string>

int main() {
  std::string word = "";
  std::vector<std::string> introduced_words;
  while (std::cin >> word) {
    introduced_words.emplace_back(word);
  }
  for (int i = introduced_words.size() - 1; i >= 0; --i) {
    std::cout << introduced_words[i]; 
    if (i != 0) {
      std::cout << " ";
    }
  }
  std::cout << std::endl;
  return 0;
}