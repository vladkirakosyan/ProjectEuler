#include <iostream>
#include <string>
/*
A palindromic number reads the same both ways. The largest palindrome made
from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/
int reverseNum(int n)
{
	int rev = 0;
	while(n > 0)
	{
		rev = rev * 10 + n % 10;
		n /= 10;	
	}
	return rev;
}

bool isPalindrome(int i)
{
	return i == reverseNum(i);
}

int main()
{
	int largPol = 0;
	int a = 999;
	while(a >= 100) {
		int b = 999;
		while(b >= 100)
		{
			
			if(a * b <= largPol) break;
			if(isPalindrome(a * b))
			{
				largPol = a * b;
			}				
			--b;
		}
		--a;
	}
	std::cout << largPol << std::endl;

	return 0;
}
