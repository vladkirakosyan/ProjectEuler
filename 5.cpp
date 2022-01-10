#include <iostream>
#include <cmath>

/*
2520 is the smallest number that can be divided by each of the numbers
from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by
all of the numbers from 1 to 20?
*/

// [1, 10] small product is 2520
// [1, 20] will be 2520 * 11 * 13 * 2 * 17 * 19 == 232 792 560 

int primes[10]{};

void primeNums(int num)
{
	int m = 0;
	for(int i = 2; i < num; ++i)
	{
		bool b = true;
		for(int j = 2; j <= i / 2; ++j)
		{
			if(i % j == 0) {
				b = false;
			}	
		}
		if(b) primes[m++] = i;
	}
}

int main()
{
	const int k = 20;
	primeNums(30);

	int N = 1;
	int a[8];

	bool check = true;
	int limit = std::sqrt(k);

	for(int i = 0; primes[i] <= k; ++i)
	{
		check = true;
		a[i] = 1;

		if(check)
		{
			if (primes[i] <= limit)
				a[i] = std::floor(std::log(k) / std::log(primes[i]));
			else
				check = false;
		}
		std::cout << a[i] << " ";
		N = N * std::pow(primes[i], a[i]);
	}
	std::cout << N << " is N";

	return 0;
}
