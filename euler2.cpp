#include <iostream>
#include <cstdlib>

int main() {
	
	unsigned long fib[2];
	fib[0] = 1;
	fib[1] = 1;
	int counter = 0;
	unsigned long sum = 0;
	while (fib[counter] < 4000000){
		if(fib[counter]%2 == 0){
			sum += fib[counter];
		}
		counter = counter==0? 1 : 0;
		fib[counter] = fib[0] + fib[1];
	}
	std::cout << sum << std::endl;
	return 0;
}
