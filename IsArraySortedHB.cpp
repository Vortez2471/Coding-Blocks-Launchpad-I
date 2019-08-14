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

int main()
{
	bool flag=true;
	int n;
	cin>>n;
	int arr[n];
	int max=INT_MIN;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]>max)
			max=arr[i];
		else
			flag=false;
	}
	if(flag==1)
		cout<<"true";
	else
		cout<<"false";
}