#include <iostream>
int main() {
  int a;
  int b = 1;
  int square_root;
  int number;
  std::cout << "input number a:";
  std::cin >> a;

  for (int i = 1; i < a; i++){
    number = a / 2 + 1 - i;// This just makes the program go a bit faster by cuting the number in half and adding 1 instead of going though every number
    square_root = number * number;
    if (square_root == a){

      std::cout << "the square root is: " << number << "\n";
      exit(1);// terminate program
    }
    }
    std::cout << "there is no even square root for this number"; //There is no even square root of the number
  }
