#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main ()
{
	char ch;
	fstream fin("t.txt", fstream::in);
	while (fin >> noskipws >> ch) {
	    cout << ch; // Or whatever
	}

}
