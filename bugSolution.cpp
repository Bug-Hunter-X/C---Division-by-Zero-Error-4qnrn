#include <iostream>

int main() {
  int x = 10;
  int y = 0;
  int z = 0;

  if (y != 0) {
    z = x / y;
  } else {
    std::cerr << "Error: Division by zero!" << std::endl;
    return 1; // Indicate an error
  }

  std::cout << "Result: " << z << std::endl;
  return 0;
} 