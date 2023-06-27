#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

double display_fahrenheit(double celsius)
{
  return celsius * 9.0 / 5.0 + 32;
}

double display_celsius(double fahrenheit)
{
  return 5.0 / 9.0 * (fahrenheit - 32);
}

void convert_temperature(void)
{
  string input;

  getline(cin, input);
  transform(input.begin(), input.end(), input.begin(), ::tolower);
  cout.precision(3);
  if (input.find("celsius") != std::string::npos) {
    cout << "\t" << fixed << display_fahrenheit(stod(input)) << "\tFahrenheit";
  } else if (input.find("fahrenheit") != std::string::npos) {
    cout << "\t" << fixed << display_celsius(stod(input)) << "\tCelsius";
  } else {
    cerr << "Cannot convert";
  }
}

int main(int ac, char **av)
{
  try {
    convert_temperature();
  } catch (const exception &e) {
    cerr << "my_convert_temperature: " << e.what();
    return 1;
  }
  return 0;
}
