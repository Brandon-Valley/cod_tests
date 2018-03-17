
#include <iostream>
#include <string>
#include <typeinfo>

//#include <string> // optional with modern GCC installs
using std::string;
using namespace std;

string half_str(string n);
char int_to_char(int i);


char int_to_char(int i)
{
	char str[2] = {0};
	std::sprintf(str, "%d", i); //make sure you are using c++11 to compile or it will yell at you for this
	return str[0];
}


string positive_half_str(string n)
{
	string result;
	int carry = 0;

	for (int i = 0 ; i < n.length() ; i++)
	{
		int digit = n[i] - '0';

		result += int_to_char(digit / 2) + carry;

		if ( ( digit % 2 == 1 ) ) //&& (i + 1 < n.length()) ) // if odd and not last digit
			carry = 5;
		else
			carry = 0;
	}
	return result;
}


int main()
{
	string s = "100002349384958200001005";

	cout << s << endl;
	cout << positive_half_str(s) << endl;

}
