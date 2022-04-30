#include<iostream>
#include<set>
using namespace std;

int doUnion(int a[], int n, int b[], int m)
{
    //code here
    // Defining set container s
    set<int> s;
   
    // Inserting array elements in s
    for (int i = 0; i < n; i++)
      s.insert(a[i]);
   
    for (int i = 0; i < m; i++)
        s.insert(b[i]);
    return s.size();
}

int main()
{
    int arr1[] = {1, 2, 2, 2, 3, 6 };
    int arr2[] = { 2, 3, 4, 5, 7 };
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
 
    system("cls");
    cout<<doUnion(arr1, n, arr2, m);
 
    return 0;
}