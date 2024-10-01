#include <iostream>

int getSumOfArray(int prices[], int size);

int main(){
  std::string students[] = {"Student1", "Student2", "Student3"};

  std::cout << "Traditional iteration\n";
  for(int i = 0; i < (sizeof(students)/sizeof(std::string)); i++){
    std::cout << students[i] + "\n";
  }

  std::cout << "\nForeach iteration\n";
  for( std::string elem : students ){
    std::cout << elem + "\n";
  }

  int prices[] = {1, 13, 10, 20};
  int size = sizeof(prices) / sizeof(prices[0]);
  std::cout << "\nSum of the array passed a function: " << getSumOfArray(prices, size);

  int* index = std::find(&prices[0], prices+size, 10); // (begin_address, end_address, target)
  std::cout << "\nIndex of '10': " << *index;

  return 0;
}

int getSumOfArray( int prices[], int size ){
  int sum = 0;

  for(int i = 0; i < size; i++){
    sum += prices[i];
  }

  return sum;
}