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

int group_compare(string a, string b)
{
    string ab = a.append(b);
    string ba = b.append(a);

    return ab.compare(ba) > 0 ? 1: 0;
}
int main()
{
    int t;
    int n;
    cin>>t;
    while(t--) 
    {
        cin>>n;
        vector<string> arr;
        for(int i=0;i<n;i++) 
        {
            string temp;
            cin>>temp;
            arr.push_back(temp);
        }
        sort(arr.begin(), arr.end(), group_compare);
        
        for(int i=0;i<n;i++)
            cout<<arr[i];
        
        cout<<endl;
    }

    return 0;
}