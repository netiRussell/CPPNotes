#include <iostream>

namespace one{
  int x = 1;
}

namespace config1{
  int batch_size = 50;
}

int main(){
  int x = 2;

  std::cout << "From the inner scope: " << x << "\n";
  std::cout << "From the outer namespace: " << one::x << "\n";

  using namespace config1;
  std::cout << "Even though batch_size is not locally declared: " << batch_size <<std::endl;

  return 0;
}