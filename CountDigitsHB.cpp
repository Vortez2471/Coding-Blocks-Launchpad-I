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

int main()
{
	string s;
	cin>>s;
	char s1;
	cin>>s1;
	int c=0;
	for(int i=0;i<s.size();i++)
		if(s[i]==s1)
			c++;
	cout<<c<<endl;
}