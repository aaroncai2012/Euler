#include <cstdlib>
#include <iostream>

int main() {
	
	int number = 0;
	for(int i = 0; i < 1000; ++i){
		if(i%5 == 0 || i%3 == 0){
			number += i;
		}
	} 
	std::cout << number << std::endl;
	return 0;
}
