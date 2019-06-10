#include <fmt/format.h>
#include <iostream>
#include <cmath>

int main(){
   int number = 2;
   int power = 4;
   int res = pow(number,power);
   std::cout << "\tResualt of 2^4 = " << res << "\n";
   return 0;
}
