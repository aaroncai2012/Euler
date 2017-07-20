#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>

bool checkPali(int num) {

  int originalNum = num;
  int reverse = 0;
  int i;
  for (i = 0; (num / std::pow(10, i)) > 10; i++) {}

  for(int j = 0; j <= i; j++) {
    int add = (num / std::pow(10, i - j));
    add *= std::pow(10, j);
    reverse += add;
    int subtract = (num / std::pow(10, i - j));
    subtract *= std::pow(10, i - j);
    num -= subtract;
  }

  return (originalNum == reverse);
  
}

int main() {

  int largest = 0;

  
  for (int i = 999; i > 99; i--) {
    for (int j = 999; j > 99; j--) {
      if (largest < i * j && checkPali(i * j)) {
        std::cout << i << ' ' << j << std::endl;
        largest = i * j;
      }
    }
  }
  


  std::cout << checkPali(997799) << std::endl;
  std::cout << largest << std::endl;
      
	return 0;
}
