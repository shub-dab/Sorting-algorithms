//Merge sort

#include <iostream>

using namespace std;

void Merge(int a[], int l[], int r[], int leftCount, int rightCount)
{
    int i, j, k;

    i = j = k = 0;

    while(i<leftCount && j<rightCount)
    {
        if(l[i] <= r[j]) a[k++] = l[i++];
        else a[k++] = r[j++];
    }

    while(i<leftCount) a[k++] = l[i++];
    while(j<rightCount) a[k++] = r[j++];

}

void MergeSort(int a[], int n)
{
    int mid, i;
    if(n<2) return;

    mid = n/2;

    int l[mid], r[n-mid];

    for(i=0; i<mid; i++) l[i] = a[i];
    for(i=mid; i<n; i++) r[i-mid] = a[i];
    MergeSort(l, mid);
    MergeSort(r, n-mid);
    Merge(a, l, r, mid, n-mid);
}

int main()
{
    int a[] = {1,10,3,4,6,5,7,9};

    int size = sizeof(a)/sizeof(a[0]);

    MergeSort(a, size);

    for(int i=0; i<size; i++)
    cout<<a[i]<<" ";

    return 0;
}