#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
#define ll long long
using namespace std;
vector<int> vec;
int main()
{
	long n;
	cin>>n;
	while(n)
	{
		long r=n%8;
		vec.push_back(r);
		n=n/8;
	}
	for(int i=vec.size()-1;i>=0;i--)
		cout<<vec[i];
	return 0;
}