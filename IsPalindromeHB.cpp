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
    string s;
    cin >> s;

    const char* strArr = s.c_str();
    bool ans = true;

    for (int i = 0; i < s.length(); i++) 
    {
        if(s[i]!=s[s.length()-i-1])
        {
            ans=false;
            break;
        }
    }
    if(ans)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    
    return 0;
}