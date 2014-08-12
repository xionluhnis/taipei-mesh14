#include <iostream>

struct var {
  var(const std::string &str) : name(str){
    std::cout << name << " created\n";
  }
  var(const var &v) : name("argument"){
    std::cout << name << " copied\n";
  }
  ~var(){
    std::cout << name << " died\n";
  }
private:
  std::string name;
};

void foo(var a, var b = var("b")){
  std::cout << "- in foo\n";
  var c("c");
  if(1 < 5){
    var d("d");
  }
  std::cout << "- out of if\n";
}

int main(){
  var v("v");
  std::cout << "- entering foo\n";
  foo(v);
  std::cout << "- out of foo\n";
  return 0;
}
