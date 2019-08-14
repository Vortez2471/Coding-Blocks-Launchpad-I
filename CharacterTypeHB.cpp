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
#define MAX 2000
using namespace std;

int main()
{
	char ch;
	cin>>ch;
	if((ch>'a'&&ch<'z')||ch=='a'||ch=='z')
		cout<<"L"<<endl;
	else if((ch>'A'&&ch<'Z')||ch=='A'||ch=='Z')
		cout<<"U"<<endl;
    else
    	cout<<"I"<<endl;
}  