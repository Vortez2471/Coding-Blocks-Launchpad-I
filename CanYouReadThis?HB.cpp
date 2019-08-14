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
using namespace std;

int main()
{
    int n;
    string s;
    cin>>s;
    n=s.length();
    string pr;

    for(int i=0;i<n;i++)
    {
        pr.push_back(s[i]);

        if(i==n-1)
            cout<<pr<<endl;

        else if(s[i+1]>='A' && s[i+1]<='Z') 
        {
            cout<<pr<<endl;
            pr.clear();
        }
    }

    return 0;

}