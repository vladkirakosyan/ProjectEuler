#include <iostream>

/*
By listing the first six prime numbers: 2, 3, 5, 7, 11,
and 13, we can see that the 6th prime is 13.

What is the 10001 st prime number?
*/
int primeNumbers(int index)
{
	int counter{};
	for(int i{2}; i < index; ++i)
	{
		if(counter == 10001) {
			std::cout << "here it is " << counter << std::endl;
			return i;
		}
		bool isPrime = true;
		for(int j {2}; j <= i / 2; ++j)
		{
			if(i % j == 0) {
				isPrime = false;
				break;
			}
		}
		if(isPrime) {
			++counter;
			std::cout << i << " ";
		}	
	}
	return counter;
}
int main()
{
	std::cout << primeNumbers(3232310) << " counter ";
	return 0;
}
