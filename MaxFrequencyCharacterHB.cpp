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
    char carr[1000];
    int index[256];
    cin>>carr;

    for(int x=0;carr[x]!='\0';x++)
    {
        index[carr[x]]++;
    }
    int ans=0;
    char ch;
    for(int x=0;x<256;x++)
    {
        if(index[x]>0)
        {
            if(index[x]>ans)
            {
                ans=index[x];
                ch=char(x);
            }
        }
    }
    cout<<ch;
}