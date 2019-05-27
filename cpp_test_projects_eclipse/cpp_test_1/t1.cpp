/*
Insertion sort
*/

#include <iostream>
using namespace std;

template <typename T>
void printarray(T arg[], int length)
{
    for(int n = 0; n < length; ++n)
        cout << arg[n] << ' ';

    cout << endl;
}

//
//template <typename T>
//int Input(T A[], int n)
//{
//	int a[] =
//
//    return n;
//}


template <typename T>
void ISort(T A[], int n)
{
    int I, J;

    for(I = 1; I < n; I++) //sorting
    {
        J = I;

        while((A[J] > A[J - 1]) && (J > 0))
        {
            swap(A[J], A[J--]);
        }
    }
}

int main()
{
    int firstarray[] = {3000000,6,3,-22,5,6,1000};
//    Input(firstarray, 7);
    cout << "before sort: ";
    printarray(firstarray, 7);

    ISort(firstarray, 7);
    cout << "after sort: ";
    printarray(firstarray, 7);

    return 0;
}
