#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <iterator>
/*
If the numbers 1 to 5 are written out in words:
one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19
letters used in total.

If all the numbers from 1 to 1000 (one thousand) inclusive
were written out in words, how many letters would be used?
*/

std::string mysubstr(std::string& s)
{
	s.erase(std::remove_if(s.begin(),s.end(),[&](char& ch)->bool
					{return (ch == ' ' || isdigit(ch) || ch == '-' || ch == '\t');}
					),s.end());
	return s;
}

int main()
{
	std::ifstream f;
	f.open("numbersto1000.txt");
	if(!f.is_open()) { 
		std::cout << "File path is undefined.\n";
	}
	else {
		std::cout << "Openned it.";
		std::vector<std::string> nums;
		std::string tmp;
		while(std::getline(f, tmp))
		{
			
			nums.push_back(mysubstr(tmp));
			tmp.clear();
		}
		int sum = 0;
		std::cout << "size of vector " << nums.size() << std::endl;
		for(int i = 0; i < nums.size(); ++i)
		{	
			std::cout << nums[i];
			sum += nums[i].size();
		}
		// counting "and" words 
		// which are ((999-100) - 9)*3 == 2670
		sum += 2670;
		std::cout << "sum is " << sum << std::endl;
	}

	f.close();
	return 0;
}
