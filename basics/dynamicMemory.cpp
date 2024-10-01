#include <iostream>

int main(){

  int* pNum = nullptr; // empty ptr
  pNum = new int;  // ptr is goin to hold an int
  *pNum = 10; // value of that int is 10

  // Array case: *pNum = new int[n_elements];

  delete pNum; // clear the memory when pNum is not needed anymore

  return 0;
}