/*Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.
Example 1:                                      Example 2:
Input:                                          Input:
N = 5                                           N = 2         
A[] = {1,2,3,5}                                 A[] = {1}
Output: 4                                       Output: 2                   */

#include<iostream>
using namespace std;

int MissingNumber(int * array, int n) 
{
        // Your code goes here
    int sum=0,max1=0,i;
    for(i=0;i<n-1;i++)
    {
        sum=sum+array[i];
            
        if(array[i] > max1)
            max1=array[i];
    }
    int allsum=0;
    int c=0;
    while(c<=max1)
    {
        allsum = allsum+c;
        c++;
    }
    if(allsum - sum == 0)
        return max1+1;
    else           
        return(allsum-sum);
}

int main()
{
    int N = 5;
    int Arr[] = {1,2,3,5};
    int result = MissingNumber(Arr,N);
    cout<<result;
    return 0;
}