#include <iostream>

int main() {
  int year;
  std::cout << "Enter a 4 digit year: ";
  std::cin >> year;
  if(year > 999 && year < 10000){
    if(year % 4 == 0){
      if(year % 100 == 0){
        if(year % 400 == 0){
          std::cout << year << " is a leap year.\n";
        }else{
         std::cout << year << " is not a leap year.\n";
        }
      }else{
        std::cout << year << " is a leap year.\n";
      }
    }else{
      std::cout << year << " is not a leap year.\n";
    }
  }else{
    std::cout << year << " is not a four digit year.\n";
  }  
}