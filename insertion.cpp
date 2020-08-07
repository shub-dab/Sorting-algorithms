//Insertion sort

#include <iostream>

using namespace std;

void InsertionSort(int a[], int n)
{
    for(int i=1; i<n; i++)
    {
        int value = a[i];
        int hole = i;

        while(hole>0 && a[hole-1]>value)  // a[hole-1]<value, for desc. order
        {
            a[hole] = a[hole-1];
            hole--;
        }
        a[hole] = value;
    }
}

int main()
{
    int a[] = {2,7,4,1,5,3};

    int size = sizeof(a)/sizeof(a[0]);

    InsertionSort(a, size);

    for(int i=0; i<size; i++)
    cout<<a[i]<<" ";

    return 0;
}

// the problem for descending order can be solved simply, if we just print in the reverse order