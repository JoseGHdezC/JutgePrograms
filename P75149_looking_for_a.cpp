#include <iostream>
#include <string>

bool AFound(std::string& string) {
  bool flag = false;
  for (int i = 0; i < string.length() && string[i] != '.'; ++i) {
    if (string[i] == 'a') {
        flag = true;
    }
  }
  return flag;
}

int main() {
  std::string introduced_string = "";
  getline(std::cin, introduced_string);
  //if (AFound(introduced_string)) {
  //  std::cout << "yes" << std::endl;
  //} else {
  //  std::cout << "no" << std::endl;
  //}
  std::cout << (AFound(introduced_string) ? "yes" : "no") << std::endl;
  return 0;
}