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
#define MAX 10000000
using namespace std;
vector<ll> vec;
void func()
{
	string s;
	ll osum=0,esum=0;
	cin>>s;
	for(ll i=0;i<s.size();i++)
	{
		ll st=s[i]-48;
		vec.push_back(st);
	}
	for(ll i=0;i<s.size();i++)
	{
		if(vec[i]%2==0)
			esum=esum+vec[i];
		else
			osum=osum+vec[i];    
	}
	if(osum%3==0||esum%4==0)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	vec.clear();
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
		func();

}