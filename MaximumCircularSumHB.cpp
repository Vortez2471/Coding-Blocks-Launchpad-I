#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
#include<string>
#include<cstring>
#include<vector>
#include<map>
#include<queue>
#include<set>
#include<list>
#include<unordered_map>
#include<unordered_set>
#define ll long long
#define MAX 100000003
using namespace std;

int kadane(int arr[], int size)
{
    int max_sum=INT_MIN,cur=0;

    for (int i=0;i<size;i++)
    {
        cur=cur+arr[i];

        if (max_sum<cur)
           max_sum=cur;

        if (cur< 0)
            cur=0;
    }
    return max_sum;
}

int maxCircularSum(int arr[], int n)
{

    int max_kadane = kadane(arr, n);

    int max_wrap = 0;

    for(int i=0;i<n;i++)
    {
        max_wrap += arr[i];
        arr[i] = -arr[i];
    }

    int non_contib_sum = kadane(arr, n);
    max_wrap = max_wrap + non_contib_sum;

    return (max_wrap > max_kadane?max_wrap:max_kadane);

}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {

        int n;
        cin>>n;

        int arr[n];

        for(int i =0;i < n;i++)
            cin>>arr[i];

        cout<<maxCircularSum(arr, n)<<endl;
    }
    return 0;
  }