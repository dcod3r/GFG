/*Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.
Example 1:
Input: 
N = 5
arr[]= {0 2 1 2 0}
Output:
0 0 1 2 2
Explanation:
0s 1s and 2s are segregated 
into ascending order.*/

#include<iostream>
using namespace std;

void sort012(int a[], int n)
    {
        // coode here
        int z=0,o=0,t=0;
        for(int i=0; i<n; ++i)
        {
            if(a[i] == 0)   ++z;
            else if(a[i] == 1)  ++o;
            else    ++t;
        }
        int i=0;
        while(z--)  a[i++]=0;
        while(o--)  a[i++]=1;
        while(t--)  a[i++]=2;
    }

int main()
{
    int N = 5, arr[]= {0, 2, 1, 2, 0}; 

    sort012(arr,N);

    for(int i=0; i<N; ++i)
        cout<<arr[i]<<" ";
    return 0;
}