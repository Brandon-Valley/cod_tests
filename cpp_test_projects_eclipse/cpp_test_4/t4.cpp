#include <iostream>
#define MOD 1000000007
using namespace std;


#include <stdio.h>      /* printf */
#include <math.h>       /* pow */

int my_pow(int b, int p)
{
	int result;
	int i = 0;
	while( i <= p)
	{
		result = b * b;
		i++;
	}

	return result;
}

int main()
{
	int a = -10;
	int pwr = 4;
	cout << pow(a, pwr) << endl;
	cout << my_pow(a, pwr) << endl;

}
