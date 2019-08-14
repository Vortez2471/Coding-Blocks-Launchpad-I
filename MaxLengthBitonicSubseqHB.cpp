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

int bitonic(int arr[], int n) 
{
    int lis[n];
    int lds[n];
    for(int i=0;i<n;i++)
        lis[i] = 1;

    for(int i=0;i<n;i++) 
        lds[i] = 1;
    
    for(int i=1;i<n;i++) 
        for(int j=0;j<i;j++) 
            if(arr[i]>arr[j] && lis[i]<lis[j]+1) lis[i] = lis[j]+1;
    
    
    for(int i=n-2;i>=0;i--) 
        for(int j=n-1;j>i;j--) 
            if(arr[i]>arr[j] && lds[i]<lds[j]+1) lds[i] = lds[j]+1;
        
    int max = lis[0] + lds[0] - 1;

    for(int i=1;i<n;i++) 
        if(max<lis[i]+lds[i]-1)
            max = lis[i]+lds[i]-1;
    
    return max;
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
        for(int i=0;i<n;i++) 
            cin>>arr[i];

        cout<<bitonic(arr, n)<<endl;

    }
    return 0;
}