#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
#include<string>
#include<cstring>
#include<vector>
#include<map>
#include<set>
#include<list>
#include<unordered_map>
#include<unordered_set>
#define ll long long
#define MAX 100000003
using namespace std;
bool arr[MAX];
void sieve()
{
	for(ll i=2;i<=MAX;i++)
		arr[i]=true;

	for(ll i=2;i*i<=MAX;i++)
		if(arr[i]==true)
			for(ll j=i*i;j<=MAX;j=j+i)
				arr[j]=false;
}
int main()
{
	ll n;
	sieve();
	cin>>n;
	if(arr[n])
		cout<<"Prime"<<endl;
	else
		cout<<"Not Prime"<<endl;
}