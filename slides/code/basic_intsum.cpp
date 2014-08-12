#include <iostream>

// declare the function
int intSum(int, int);

// main code
int main(){
  // compute sums
  int x = intSum(0, 100);
  int y = x + intSum(101, 200);
  int z = intSum(0, 200);
  // display sums
  std::cout << "x = " << x << "\n";
  std::cout << "y = " << y << "\n";
  std::cout << "z = " << z << "\n";

  // test
  if( y == z ){
    std::cout << "intSum(0, 100) + intSum(101, 200) == intSum(0, 200)\n";
    std::cout << "Everything is ok!\n";
    return 0;
  } else {
    std::cerr << "Something looks wrong!\n";
    return 1;
  }
}

// define function
int intSum(int A, int B){
  int sum = 0;
  for(int i = A; i <= B; ++i)
    sum += i;
  return sum;
}
