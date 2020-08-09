// Kadane's algorithm

#include <iostream>

using namespace std;
int start = 0, end_ = 0;

int maxSubarraySum(int a[], int n){
    
    int max_eh = 0;
    int max_sf = -10000001;
    
    for(int i=0; i<n; i++)
    {
        max_eh = max_eh + a[i];
        
        if(a[i] > max_eh) 
        {
            max_eh = a[i];
            if(a[i] >= 0)
            {
                start = i;
                end_ = i;
            }
        }
        
        if(max_eh > max_sf) 
        {
            max_sf = max_eh;
            end_ = i;
        }
        
    }
    return max_sf;
    
}



int main()
{
    int a[] = {-2,-3,4,-1,-2,1,5,-3};
    // int a[] {-1,-2,-3,-4};

    int size = sizeof(a)/sizeof(a[0]);

    int sum = maxSubarraySum(a, size);

    cout<<"Subarray: ";
    for(int i=start; i<=end_; i++)
    cout<<a[i]<<" ";

    cout<<endl<<"Sum: "<<sum;

    return 0;

}

