//Quick sort

#include <iostream>
#include <cstdlib>
#include<ctime>

using namespace std;

int Partition(int a[], int start, int end)
{
    srand(time(NULL));  // plants seed so that rand() gives different output each time     
    int random = start + rand() % (end - start);   // extra code for implementing
    swap(a[random], a[end]);                       // randomization
    
    int pivot = a[end];
    int pIndex = start;

    for(int i=start; i<end; i++)
    {
        if(a[i] <= pivot)
        {
            swap(a[i], a[pIndex]);
            pIndex++;
        }
    }
    swap(a[pIndex], a[end]);
    return pIndex;
}

void QuickSort(int a[], int start, int end)
{
    if(start < end) 

   { int pIndex = Partition(a, start, end);

    QuickSort(a, start, pIndex-1);
    QuickSort(a, pIndex+1, end);
   }
}

int main()
{
    int a[] = {7,2,18,10,23,8,5,9,4};

    int size = sizeof(a)/sizeof(a[0]);

    QuickSort(a, 0, size-1);

    for(int i=0; i<size; i++)
    cout<<a[i]<<" ";

    return 0;
}