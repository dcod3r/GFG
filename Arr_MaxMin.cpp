#include<iostream>
#include<climits>
using namespace std;

pair<long long, long long> getMinMax(long long a[], int n) {
    long long mx = INT_MIN, mn = INT_MAX;
    for(long long i = 0; i < n; ++i)
        mx = max(a[i], mx), mn = min(mn, a[i]);
    pair<long long, long long> ans = make_pair(mn, mx);
    cout<<mx<<mn;
    return ans;
}

int main()
{
    long long  A[]={5,15,6,4,5,7,9,2};
    int n = sizeof(A)/sizeof(A[0]);
    getMinMax(A,n);
    return 0;
}

