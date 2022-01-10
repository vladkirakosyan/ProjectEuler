#include <iostream>
/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.

*/
long long int sum(long long int ind)
{
	long long int sum{};
	for(int i = 2; i < ind; ++i)
	{
		bool isPrime = true;
		for(int j = 2; j <= i / 2; ++j)
		{
			if(i % j == 0) {
				isPrime = false;
				break;
			}
		}
		if(isPrime) sum += i;
	}
	return sum;
}

int main()
{

	std::cout << sum(2000000) << std::endl;
	return 0;
}

