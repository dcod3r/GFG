#include <iostream>
using namespace std;
/*An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers.

Examples : 

Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
Output: -12 -13 -5 -7 -3 -6 11 6 5*/

void arrange(int a[],int n)
{
    int j=0;
    for(int i=0; i<n; i++)
    {
        if(a[i] < 0)
        {
            if(i  != j)
                swap(a[i],a[j]);
            j++;
        }
    }
    
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
}
int main() {
	
	int arr1[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int n = sizeof(arr1) / sizeof(arr1[0]);
    arrange(arr1, n);

cout<<"\n\n";

    int arr2[] ={2, 11, -13, -5, 6, -7, 5, -3, -6}; 
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
     arrange(arr2, n2);
    cout<<"\n\n";
	return 0;
}