#include <iostream>

int main(){
  std::string someText = "Hello World!";
  // std::endl works like a  "\n" which flushes the output buffer
  std::cout << "Here's my first output: " << someText << std::endl;

  const float PI = 3.14;
  std::cout << "Look! A pie! --> " << PI << std::endl;

  return 0;
}