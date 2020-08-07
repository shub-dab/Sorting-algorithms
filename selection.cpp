//Selection sort

#include <iostream>

using namespace std;

void SelectionSort(int a[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int iMin = i;
        for(int j=i+1; j<n; j++)
        {
            if(a[j] < a[iMin])  // change to ">" for desc. order
            iMin = j;
        }
        swap(a[i], a[iMin]);
    }
}

int main()
{
    int a[] = {2,7,4,1,5,3,9,6};

    int size = sizeof(a)/sizeof(a[0]);

    SelectionSort(a, size);

    for(int i=0; i<size; i++)
    cout<<a[i]<<" ";

    return 0;
}