#include <iostream>

// To get some memory address, use & (address-of operator)
// To get value at that address, use * (dereference operator)

void modifyInt( int &x );

int main(){

  // Besides array and other complicated data structures, variables are passed to functions by value
  // Therefore, if you need to modify a variable -> pass by reference
  int x = 10;
  modifyInt(x);

  // Example of a pointer
  int* pX = &x;
  std::cout << "The value at " << pX << " is " << *pX ; // 20

  // Null pointer (one that doesn't hold at any address)
  int* poinerNullExample = nullptr;

  // DO NOT dereference(*) a nullptr and create a pointer that points at some free memory. This leads to undefined behavior.


  return 0;
}

void modifyInt( int &x ){
  x += 10;
}