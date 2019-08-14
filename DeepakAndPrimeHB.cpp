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
bool arr[MAX]={false};

void prime()
{
    for(ll i=2;i<=MAX;i++)
    {
    	arr[i]=true;
    }

	for(ll i=2;i*i<=MAX;i++)
		if(arr[i]==true)
		  for(ll j=i*i;j<=MAX;j=j+i)
				 arr[j]=false;
 
}

int main()
{
	prime();
	ll n,i=0,k=0;
	cin>>n;
	while(1)
	{
		if(k==n)
		{
			cout<<i-1<<endl;
		    break;
		}
		if(arr[i]==1)
			k++;
		i++;
	}
}
