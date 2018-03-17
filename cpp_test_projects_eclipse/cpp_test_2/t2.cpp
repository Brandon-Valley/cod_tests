
#include <iostream>
#include <string>

#define max(a,b) ((a) > (b) ? (a) : (b))

using namespace std;


typedef unsigned int uint;

//divide and conquer, no rem
void divideAndConquer(const uint num_str, const uint den_str, uint& quo_str)
{
    if (num_str < den_str)
    {
        quo_str = 0;
        return;
    }

    if(num_str == den_str)
    {
        quo_str = 1;
        return;
    }

    uint min = 0,
    max = num_str;

    while (true)
    {
    	cout << max << "-------" << min << endl;//	```````````````````````````````````````````
        uint half = (max + min) / 2;
        cout << half << endl;//```````````````````````````````````````````````````

        int  posRem = num_str - den_str * half;

        cout << "  posRem: " << posRem << endl;
        if(posRem < 0)
        {
//        	cout << "   posRem < 0" << endl;//`````````````````````
        	max = half - 1;
        }
        else if((posRem) >= den_str)
        {
        	cout << "  (posRem) >= den_str" << endl;
        	min = half + 1;
        }

        else {
            quo_str = half;
            break;
        }
    }
}

int main()
{
	cout << "hi thersdssfsfsfsffsd" << endl;

	int i1 = 70;
	int i2 = 10;
	unsigned int q;


	divideAndConquer(i1, i2, q);

	cout << q << " ... " << endl;

}


