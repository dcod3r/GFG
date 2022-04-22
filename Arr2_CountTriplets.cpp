/*Given an array of distinct integers. The task is to count all the triplets such that sum of two elements equals the third element.
 
Example 1:
Input:
N = 4
arr[] = {1, 5, 3, 2}
Output: 2
Explanation: There are 2 triplets: 
1 + 2 = 3 and 3 +2 = 5 

Example 2:
Input: 
N = 3
arr[] = {2, 3, 4}
Output: 0
Explanation: No such triplet exits*/

#include<iostream>
using namespace std;

int countTriplet(int arr[], int n)
	{
	    // Your code goes here
	    int count =0;
	    
	    int id[10000]={0};
	    
	    for(int i=0; i<n; i++)
	        id[arr[i]] = 1;
	        
	        
	    for(int i=0; i<n-1; i++)
	    {
	        int j=i+1;
	        while(j<n)
	        {
	            if(id[arr[i] + arr[j]] == 1)
	                count++;
	            j++;
	        }
        }
	    return count;
	}

int main()
{
    int arr1[] = {1, 5, 3, 2};
    int c1 = countTriplet(arr1,4);

    cout<<c1<<"\n";

    int arr2[] = {2, 3, 4};
    int c2 = countTriplet(arr2,3);

    cout<<c2;

    return 0;
}