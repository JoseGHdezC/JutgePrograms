#include <iostream>
#include <string>

int main() {
  int position_x{0};
  int position_y{0};
  char direction;
  std::string direction_string = "";
  getline(std::cin, direction_string);
  for (int i = 0; i < direction_string.length(); ++i) {
    direction = direction_string[i];
    switch(direction) {
     case 'n':
      --position_y;
      break;
     case 's':
      ++position_y;
      break;
     case 'e':
      ++position_x;
      break;
     case 'w':
      --position_x;
      break;
    }
  }
  std::cout << "(" << position_x << ", " << position_y << ")\n";
  return 0;
}