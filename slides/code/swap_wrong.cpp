#include <iostream>

void swap_wrong(int x, int y){
  int tmp = x;
  x = y;
  y = tmp;
}

int main(){
  int a = 1, b = 2;
  std::cout << "a = " << a << ", b = " << b << "\n";

  // try to swap a and b
  swap_wrong(a, b);

  // didn't work!
  std::cout << "a = " << a << ", b = " << b << "\n";

  return 1;
}
