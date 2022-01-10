#include <iostream>

/* 
power digit sum
What is the sum of the digits of the number 2^1000 ?
*/
int main()
{
	// 2^1000 bit view is 1 and 1000 of 0-s combinated 
	int arr[1001] {};
	int sum = 0;
	arr[0] = 1;
	for(int i = 1; i <= 1000; ++i)
	{
		arr[0] = 2 * arr[0];
		for(int k = 1; k < 500; ++k)
		{
			arr[k] = 2 * arr[k] + arr[k - 1] / 10;
		}
		for(int j = 0; j < 500; ++j)
		{
			arr[j] = arr[j] % 10;
		}
	}
	for(int i = 0; i < 500; ++i)
	{
		sum += arr[i];
		std::cout << arr[i] << " ";
	}
	std::cout << "\nsum is " << sum << std::endl;

	return 0;
}
