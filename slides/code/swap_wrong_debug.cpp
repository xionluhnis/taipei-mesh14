#include <iostream>

void swap_wrong(int x, int y){
  int tmp = x;
  x = y;
  y = tmp;
  std::cout << "addr(x) = " << &x << ", addr(y) = " << &y << "\n";
  std::cout << "x = " << x << ", y = " << y << "\n";
}

int main(){
  int a = 1, b = 2;
  std::cout << "a = " << a << ", b = " << b << "\n";

  // try to swap a and b
  swap_wrong(a, b);
  // didn't work!

  std::cout << "addr(a) = " << &a << ", addr(b) = " << &b << "\n";
  std::cout << "a = " << a << ", b = " << b << "\n";

  return 1;
}
