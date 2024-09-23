#include <iostream>
#include <vector>

typedef std::vector< std::pair<std::string, int> > pairlist_t;
typedef std::string str_t; 
using text_t = std::string;

int main(){

  // typedef - keyword to create an alias for some datatype. Helps with readability
  // ! Modern convention is to use "using" instead. See text_t.
  pairlist_t example;
  str_t example2 = "String";
  text_t example3 = "String declared with an alias for a string. The alias is created with 'using'";
  std::cout << example3;

  return 0;
}