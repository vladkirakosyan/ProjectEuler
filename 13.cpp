#include <iostream>
#include <fstream>
#include <string>
#include <vector>
/*
Work out the first ten digits of the sum of the following
one-hundred 50-digit numbers.
*/
int main()
{
	std::ifstream f;
	f.open("numbers.txt");
	if(!f.is_open()) std::cout << "Error in openning\n";
	else{
		std::cout << "Openned it\n";
		std::vector<std::string> s;
		s.reserve(50);
		char ch;
		std::string tmp;
		int count = 0;
		int v_count = 0;
		while(f.get(ch))
		{
			if(count < 10) { 
				tmp.push_back(ch);
				//std::cout << ch << " ";
			}
			++count;
			if(count == 51) {
				count = 0;
				s.push_back(tmp);
				tmp.clear();
			}
		}
		std::string sum;
		long long int amount;
		for(int i = 0; i < s.size(); ++i)
		{
			std::cout << s[i] << std::endl;
		}
		for(auto it : s)
		{	
			amount += std::stoll(it);	
		}
		std::cout << "long sum is " << amount << std::endl;
		
	}
	// not finished yet
	f.close();
	return 0;
}

