#include <iostream>

// function to display variable bits
template <typename T>
void show_bits(const std::string &str, T var){
  typedef int MaxType;
  union {
    MaxType i;
    T value;
  } u;
  u.value = var;
  std::cout << str;
  for(int i = sizeof(T) - 1; i >= 0; --i){
    MaxType L = (u.i >> (i * 8)) & 0xFF;
    for(int B = 7; B >= 0; --B)
      std::cout << ((L >> B) & 1);
    if(i) std::cout << "'";
  }
  std::cout << "\n";
}

int main(){

  int a = 1;
  float b = 1.0f;
  char c = '1';

  std::cout << "# Signed, positive\n";
  show_bits("a = ", a);
  show_bits("b = ", b);
  show_bits("c = ", c);

  a = -1;
  b = -1.0f;
  c = -'1';

  std::cout << "# Signed, negative\n";
  show_bits("a = ", a);
  show_bits("b = ", b);
  show_bits("c = ", c);
  return 0;
}
