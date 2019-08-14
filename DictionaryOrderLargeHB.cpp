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
vector<string>vec;
void order(string s,ll start,ll last,string str)
{
   if(start==last)
   {
   	  if(s>str)
   	    vec.push_back(s);
   }
   else
   {
	   for(ll i=start;i<=last;i++)
	   {
	    swap(s[start],s[i]);
	    order(s,start+1,last,str);
	    swap(s[i],s[start]);
	   }
   }
}

int main()
{
	string s;
	cin>>s;
	ll n=s.length();
	order(s,0,n-1,s);
	sort(vec.begin(),vec.end());
	for(int i=0;i<vec.size();i++)
	{
		cout<<vec[i]<<endl;
	}
}