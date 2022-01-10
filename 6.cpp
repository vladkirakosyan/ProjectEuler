#include <iostream>
int sumofsquares(int index)
{
	int sum{};
	for(size_t i{1}; i <= index; ++i)
	{
		sum += i * i;
	}
	return sum;
}

long long int squareofsum(int index)
{
	long long int sum{};	
	for(size_t i{1}; i <= index; ++i)
	{
		sum += i;
	}
	return sum * sum;
}
int main()
{
	int n = 100;
	std::cout << squareofsum(n) - sumofsquares(n) 
		<< " is difference\n";
	return 0;
}
