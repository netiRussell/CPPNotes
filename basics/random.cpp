#include <iostream>

int main(){
  // Set random generator
  srand( time(NULL) );

  // Get a random number from 1 to 10
  int num = (rand() % 10) + 1;

  std::cout << num;

  return 0;
}