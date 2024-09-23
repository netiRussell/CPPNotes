#include <iostream>

int main(){
  std::string input;

  std::cout << "Input something: ";
  // >> std::ws clears all the white spaces from the buffer
  std::getline(std::cin >> std::ws, input);
  std::cout << "Here's what you've input: " << input << std::endl;

  return 0;
}