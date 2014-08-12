#include <iostream>

struct id {
  const int value;
  id() : value(num++){}

  static int count() {
    return num;
  }
private:
  static int num;
};
int id::num = 0;

int main(){

  id a, b;

  std::cout << "a.value = " << a.value << "\n";
  std::cout << "b.value = " << b.value << "\n";
  std::cout << "a.count() = " << a.count() << " = " << id::count();
  std::cout << " = " << b.count() << " = b.count()\n";

  return 0;
}
