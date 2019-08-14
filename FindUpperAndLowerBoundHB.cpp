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

vector <ll> vec;

int main()
{
	ll j,n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>j;
		vec.push_back(j);
	}
	ll t,m;
	cin>>t;
	while(t--)
	{
		cin>>m;
		vector<ll>::iterator up=upper_bound(vec.begin(),vec.end(),m);
		vector<ll>::iterator low=lower_bound(vec.begin(),vec.end(),m);
		if(low==vec.end()||up==vec.end())
			cout<<-1<<" "<<-1<<endl;
		else
			cout<<low-vec.begin()<<" "<<up-vec.begin()-1<<endl;
	}
}