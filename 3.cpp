#include <iostream>
/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143?
*/
void primeFactors(long long int index)
{
	int a = 2;
	int b = 1;
	while(index > 1)
	{
		while(index % a == 0) {
			index /= a;
			std::cout << a << " ";
		}
		a = a + 1;
	}

}
int main()
{
	primeFactors(600851475143);
	return 0;
}
