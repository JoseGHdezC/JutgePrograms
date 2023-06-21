#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

double RectangleArea(const double klength, const double kheight) {
  return klength * kheight;
}

long double CircleArea(const long double kpi, const double kradius) {
  return kpi * kradius * kradius;
}

void ComputeAreas(const int kammount, std::vector<std::string>& figures, std::vector<double>& measurements, const long double kpi) {
  int measurements_index{0};
  for (int i = 0; i < kammount; ++i) {
    if (figures[i] == "rectangle") {
      std::cout << std::fixed << std::setprecision(6) << RectangleArea(measurements[measurements_index++], measurements[measurements_index++]) << std::endl;
    } else if (figures[i] == "circle") {
      std::cout << std::fixed << std::setprecision(6) << CircleArea(kpi, measurements[measurements_index++]) << std::endl;
    }
  }
}

int main() {
  const long double kPi{3.141592653589793238462643383279502884};
  int figure_ammount{0};
  std::string figure = "";
  std::vector<std::string> figures;
  std::vector<double> measurements;
  std::cin >> figure_ammount;
  for (int i = 0; i < figure_ammount; ++i) {
    std::cin >> figure;
    figures.emplace_back(figure);
    if (figure == "rectangle") {
      double length{0};
      double height{0};
      std::cin >> length >> height;
      measurements.emplace_back(length);
      measurements.emplace_back(height);
    }
    if (figure == "circle") {
      double radius{0};
      std::cin >> radius;
      measurements.emplace_back(radius);
    } 
  }
  ComputeAreas(figure_ammount, figures, measurements, kPi);
  return 0;
}