
#include <iostream>
#include <string>

#include <typeinfo>

using namespace std;


typedef unsigned int uint;

typedef unsigned int uint;

void divideAndConquer(const uint num, const uint den, uint& quo)
{
	uint rem = 0;

	if (num == 0 || den == 0)
	{
		quo = 0;
		return;
	}

    if (num < den)
    {
        quo = 0;
        return;
    }
    if(num == den)
    {
        quo = 1;
        return;
    }
    quo = 0;
    rem = num;

    uint min = 0,
         max = num;

    while (rem >= den)
    {
        uint number = (max + min) >> 1;
        int  posRem = num - den * number;
        if(posRem < 0)
            max = number - 1;
        else if(uint(posRem) >= den)
            min = number + 1;
        else {
            quo = number;
            rem = uint(posRem);
            return;
        }
        // Old school:)
        rem -= den;
        ++quo;
    }
}

int main()
{
	cout << "hi thersdssfsfsfsffsd" << endl;

	int i1 = 70;
	int i2 = 15;
	unsigned int q;
	unsigned int r;


	divideAndConquer(i1, i2, q);

	cout << q << " ... "  << endl;

}
