#include<iostream>

int main(){
  int x; // declare a variable of type "int"
  x = 7; // assign a value to "x"

  int y = 2; // declare and assign 2 to "y"
  y = y * 2; // multiply y by 2, then assign to y
  y *= 2; // shorter version of above

  int z = (y - 2) * x; // z equals 42

  // output values
  std::cout << "x = " << x << "\n";
  std::cout << "y = " << y << "\n";
  std::cout << "z = " << z << "\n";
  return 0;
}
