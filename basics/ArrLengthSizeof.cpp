#include <iostream>

int main(){

  // sizeof() - returns size of a data in bytes

  int array[] = {1, 2, 3};
  std::cout << "This array has " << sizeof(array)/sizeof(array[0]) << " elements";
  

  return 0;
}