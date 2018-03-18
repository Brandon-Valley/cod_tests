// CPP program to check if two
// numbers are co-prime or not
#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
//	cout << "a: " << a << "  b: " << b << endl;
	if (a == 0)
		return b;
	return gcd(b%a, a);
}

// function to check and print if
// two numbers are co-prime or not
bool coprime(int a, int b)
{
    if (gcd(a, b) == 1)
        return true;
    return false;
}

int get_coprime(int num)
{
	int i = 2;
	while(coprime(num, i) == false)
		i++;
	return i;
}

// driver code
int main()
{
	long long acs = 0.1;

    int a = 10000000001, b = 2;
    cout << coprime(a, b) << endl;
    a = 8, b = 16;
    cout << coprime(a, b) << endl;

    int num = 10000000001;
    cout << get_coprime(num) << endl;

    return 0;
}
