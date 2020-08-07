//Bubble sort

#include <iostream>

using namespace std;

void BubbleSort(int a[], int n)
{
    for(int i=0; i<n-1; i++)
    { 
        int flag = 0;
        for(int j=0; j<n-1-i; j++)
        {
            if(a[j] > a[j+1]) // change to "<" for desc. order
            {
                swap(a[j], a[j+1]);
                flag = 1;
            } 
        }
        if(flag == 0) break; // break if already sorted
    }
}

int main()
{
    int a[] = {2,7,4,1,5,3,10,6};

    int size = sizeof(a)/sizeof(a[0]);

    BubbleSort(a, size);

    for(int i=0; i<size; i++)
    cout<<a[i]<<" ";

    return 0;
}