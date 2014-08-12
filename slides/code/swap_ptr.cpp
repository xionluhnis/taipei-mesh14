#include <iostream>

void swap_ptr(int *x, int *y){
  int tmp = *x;
  *x = *y;
  *y = tmp;

  std::cout << "addr(*x) = " << x << ", addr(*y) = " << y << "\n";
}

int main(){
  int a = 1, b = 2;
  std::cout << "a = " << a << ", b = " << b << "\n";

  // swap values of a and b
  swap_ptr(&a, &b);

  // it worked!
  std::cout << "addr( a) = " << &a << ", addr( b) = " << &b << "\n";
  std::cout << "a = " << a << ", b = " << b << "\n";
  return 1;
}
