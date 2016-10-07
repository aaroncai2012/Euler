#include <cstdlib>
#include <iostream>
#include <cmath>

bool checkPrime(unsigned long x) {

	for(int i = 2; (i * i) <= x; ++i){
		if((x % i) == 0){ return false; }
	}
	return true;
}

unsigned long nextPrime(unsigned long x) {
	
	++x;
	while (checkPrime(x) == false) {
		++x;
	}
	return x;	

}

int main() {
	
	unsigned long num;
	unsigned long factor = 1;
	unsigned long answer = 1;	
	std::cout << "insert number: ";
	std::cin >> num;
	
	while ((factor * factor) <= num) {
		unsigned long next = nextPrime(factor);
		if((num % next) == 0) {
			answer = next;
			factor = next;
		}
		else{factor = next;}
	}

	std::cout << std::endl << "The greatest prime factor of " << num << " is: " << answer << std::endl; 
	return 0;
}
