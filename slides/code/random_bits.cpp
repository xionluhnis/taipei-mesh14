#include <iostream>
#include <stdlib.h>
#include <time.h>

int show_bits(int n){
  for(int B = 31; B >= 0; --B){
    int b = (n >> B) & 1;
    std::cout << b;
    if(B > 0 && B % 8 == 0) std::cout << "'";
  }
  std::cout << "\n";
}

int main(){
  srand(time(NULL));
  int N = rand() * rand() * rand() * rand();
  show_bits(N);
  return 0;
}
