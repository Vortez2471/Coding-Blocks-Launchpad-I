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

int main ()
{
	ll n;
	cin>>n;
	ll arr[n];
	ll max=INT_MIN;
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]>max)
			max=arr[i];
	}
	cout<<max<<endl;

}