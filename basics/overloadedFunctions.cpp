#include <iostream>

int substract();
int substract(int a);
int substract(int a, int b);

int main(){
  std::cout << substract() << '\n';
  std::cout << substract(10) << '\n';
  std::cout << substract(10, 5) << '\n';

  return 0;
}

int substract(){
  return 0;
}

int substract(int a){
  return a;
}

int substract(int a, int b){
  return a-b;
}