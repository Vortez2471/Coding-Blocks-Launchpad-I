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
    char str[1000];
    int nstr[2000];
    cin>>str;
    int i=1;
    cout<<str[0];
    while(str[i]!='\0')
    {
        nstr[i]=int(str[i])-int(str[i-1]);
        cout<<nstr[i]<<str[i];
        i++;
    }
    return 0;
}