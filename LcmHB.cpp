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
    int n,m;
    cin>>n>>m;

    if(n>m)
    {
        int temp=m;
        m=n;
        n=temp;
    }

    int lcm=m;
    while(lcm>0)
    {
        if(lcm%m==0 && lcm%n==0)
        {
            break;
        }

        lcm++;
    }
    cout<<lcm<<endl;
    return 0;
}