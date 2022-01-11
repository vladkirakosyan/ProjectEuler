#include <iostream>
/*
The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Which starting number, under one million, produces the longest chain?
NOTE: Once the chain starts the terms are allowed to go above one million.

*/
int f(long long int num)
{
	int counter = 0;
	std::cout << "num is " << num << std::endl;
	while(num != 1)
	{
		++counter;
		if(num % 2 == 0) num = num / 2;
		else {
			num = num * 3 + 1;
		}
		std::cout << num << " ";
	}
	std::cout << "counter is " << counter + 1 << "\t";
	std::cout << std::endl;
	return counter + 1;
}
int main()
{
	int max = 0;
	std::cout << "f(837799) == " << f(837799) << std::endl;
	for(int i = 1000000; i >= 999990; --i)
	{
		int k = f(i);
		if(max < k) max = k; 
	}
	std::cout << "MAX IS " << max << std::endl;

	return 0;
}
