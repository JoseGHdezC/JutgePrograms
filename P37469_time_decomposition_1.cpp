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
  const int kHourSeconds = 3600;
  const int kMinuteSeconds = 60;
  int ammount_seconds = 0;
  int hours = 0;
  int minutes = 0;
  int seconds = 0;
  //std::cout << "Introduce the ammount of seconds to decypher: ";
  std::cin >> ammount_seconds;
  while (ammount_seconds > 0) {
    if (ammount_seconds / kHourSeconds > 0) {
      hours++;
      ammount_seconds -= kHourSeconds;
    } else if (ammount_seconds / kMinuteSeconds > 0) {
      minutes++;
      ammount_seconds -= kMinuteSeconds;
    } else {
      seconds++;
      ammount_seconds--;   
    } 
  }
  std::cout << hours << " " << minutes << " " << seconds << std::endl;
  return 0;
}
