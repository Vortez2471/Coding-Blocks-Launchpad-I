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

int main()
{
	double min,max,step;
	cin>>min>>max>>step;
	for(double i=min;i<=max;i=i+step)
	{
		int C=((double)5/9)*(i-32);
		cout<<i<<" "<<C<<endl;
	}
	return 0;
}