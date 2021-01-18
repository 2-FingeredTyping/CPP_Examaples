#include <iostream>

int main() {
  int i;
  double weight;
  int planet_choice;
  int num_planets = 7;
  const char *planets[] = {"Mercury", "Venus", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
  double relative_gravy[] = {0.38, 0.91, 0.38, 2.34, 1.06, 0.92, 1.19};

  std::cout << "Hello! This program will allow you to calculate your weight on other planets.\n";
  std::cout << "It works for any unit of weight (pounds, kg, stone, etc.)\n";
  std::cout << "What is your weight on Earth?  ";
  std::cin >> weight;
  std::cout << "Type in the number for one of the following planets\n";

  for(i = 0; i < num_planets; i++){
    std::cout << i << ". " << planets[i] << "\n";
  }

  std::cin >> planet_choice;
  std::cout << "Your weight on " << planets[planet_choice] << " is " << (weight * relative_gravy[planet_choice]) << ".\n";
}