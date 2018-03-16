
#include <iostream>
#include <string>

#include <typeinfo>

using namespace std;


template <typename T>
void check_match(T a)
{
	if (typeid(a) == typeid(string))
		cout << "match" << endl;
}

int main()
{
	string b = "jioiojn";
	int a = 4;
//	if (typeid(b) == typeid(string))
//		cout << "match" << endl;
	check_match(a);
	cout << "end" << endl;

}
