#include <iostream>

/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2

For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/
int main()
{
	const int sum = 1000;
	
	for(int a = 0; a <= sum / 3; ++a)
	{
		for(int b = a + 1; b < sum / 2; ++b)
		{
			int c = sum - a - b;
			if(a * a + b * b == c * c and a + b + c == 1000)
				std::cout << "Product is " << a * b * c << std::endl;
		}
			
	}

	return 0;
}
