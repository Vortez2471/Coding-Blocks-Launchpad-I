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

ll sum(ll arr[], ll size)
{
    ll max_sum=INT_MIN,cur=0;

    for (ll i=0;i<size;i++)
    {
        cur=cur+arr[i];

        if (max_sum<cur)
           max_sum=cur;

        if (cur< 0)
            cur=0;
    }
    return max_sum;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll max_sum=sum(arr, n);
        cout<<max_sum<<endl;
    }

    return 0;
}
