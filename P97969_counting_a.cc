#include <iostream>
#include <string>

int main () {
  std::string sentence = "";
  getline(std::cin, sentence);
  char sentence_char;
  int i = 0;
  int number_of_a = 0;
  do {
    sentence_char = sentence[i++];
    if (sentence_char == 'a') {
      ++number_of_a;
    }
  } while(sentence_char != '.');
  std::cout << number_of_a << std::endl;
  return 0;
}