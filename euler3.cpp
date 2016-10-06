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
		if((num % nextPrime(factor)) == 0) {
			answer = nextPrime(factor);
			factor = nextPrime(factor);
		}
		else{factor = nextPrime(factor);}
	}

	std::cout << std::endl << "The greatest prime factor of that number is: " << answer; 
	std:: cout << std::endl << "The next prime number is: " << nextPrime(num);
	return 0;
}
