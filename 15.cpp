#include <iostream>

/*
 * Starting in the top left corner of a 2×2 grid, and only being able
 * to move to the right and down, there are exactly 6 routes to the
 * bottom right corner.
 * How many such routes are there through a 20×20 grid? 
*/

unsigned long factorial(int num)
{
	if(num < 3)
	{
		return num;
	}
	return num * factorial(num - 1);
}

// works for (m x n) grid, or for squares
int latticePaths(int m, int n = 1)
{
	int path = m + n;
	int answer = factorial(m + n) / (factorial(m) * factorial(n));
	

	return answer;
}

int main()
{
	std::cout << latticePaths(5, 5);
	//std::cout << latticePaths(20, 20) << std::endl;
	// 20! is big number so we can't store it in unsigned long
	return 0;
}
