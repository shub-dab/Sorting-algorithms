//Merge sort

#include <iostream>

using namespace std;

void Merge(int a[], int l[], int r[], int leftCount, int rightCount)
{
    int i, j, k;

    i = (leftCount!=1) ? leftCount-1 : 0;
    j = (rightCount!=1) ? rightCount-1 : 0;

    k = leftCount+rightCount-1;

    while(i>=0 && j>=0)
    {
        if(l[i] <= r[j]) a[k--] = l[i--];
        
        else a[k--] = r[j--];
    }

    while(j>=0) a[k--] = r[j--];

    while(i>=0) a[k--] = l[i--];

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
    int a[] = {2,7,4,1,10,20,12,17,5,3,6};

    int size = sizeof(a)/sizeof(a[0]);

    MergeSort(a, size);

    for(int i=0; i<size; i++)
    cout<<a[i]<<" ";

    return 0;
}