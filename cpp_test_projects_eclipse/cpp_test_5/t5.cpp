// CPP program to check if two
// numbers are co-prime or not
#include<bits/stdc++.h>
using namespace std;

//#include <list>
#include <iostream>
#include <iterator>

using std::list;

template<typename T>
void some_function(std::vector<T> & vect){cout << vect.empty() << endl;}

//template<typename T>
list<int> get_list()
{
	list<int> new_list;
	new_list.push_back(5);
	return new_list;
}




int main( )
{
//	std::vector<int> v1;
//	some_function(v1);
//	std::vector<string> v2;
//	some_function(v2);

	list<int> l1;

	l1 = get_list();
	cout << l1.front() << endl;
}
