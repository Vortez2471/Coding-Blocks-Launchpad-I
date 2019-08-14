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

void conv(string s,int i,int n)
{
  if(i!=n)
  	{
  		int ch=s[i]-48;
  		cout<<ch;
  		conv(s,i+1,n);
  		return;
  	}
}

int main()
{
	string s;
	cin>>s;
	conv(s,0,s.size());
}