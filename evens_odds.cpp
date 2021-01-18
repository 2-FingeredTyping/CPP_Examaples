#include <iostream>
#include <vector>

int main(){
  int sum = 0;
  int product = 1;
  std::vector<int> input_vector = {1, 5, 4, 69, 3, 164, 7, 64 ,29, 320, 14, 78, 20, 46, 3};

  for(int i = 0; i < input_vector.size(); i++){
    int val = input_vector[i];
    if(val % 2 == 0){
      sum += val;
    }else{
      product *= val;
    }
  }
  std::cout << "Sum of even numbers is " << sum << "\n";
  std::cout << "Product of odd numbers is " << product << "\n";
}