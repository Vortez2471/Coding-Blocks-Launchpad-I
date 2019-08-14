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
#define MAX_RLEN 50
#define ll long long
#define pb push_back
#define pii pair<ll,ll> 
#define N 200005
#define PI 3.1415926535
using namespace std;

int answer(int n)
{
   int arr[n],arr1[n];
    arr[0]=1,arr1[0]=1;
    for(int i=1;i<n;i++)
    {
        arr[i]=arr[i-1]+arr1[i-1];
        arr1[i]=arr[i-1];
    }
    return arr[n-1]+arr1[n-1];
}
int main()
{
    int t,i=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<"#"<<i+1<<" : "<<answer(n)<<endl;
        i++;
    }
}