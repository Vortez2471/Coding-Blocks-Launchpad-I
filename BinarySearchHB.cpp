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
ll key;
ll bsearch(ll arr[],ll start,ll end)
{
    if(start<=end)
    {
    	ll mid=(start+end)/2;
		if(arr[mid]==key)
			return mid;
	    if(arr[mid]>key)
			return bsearch(arr,start,mid-1);
		else
			return bsearch(arr,mid+1,end);
	}
	return -1;
}

int main()
{
	ll n;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++)
		cin>>arr[i];
	cin>>key;
	cout<<bsearch(arr,0,n-1);
}