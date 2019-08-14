#include <iostream>
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
    int i,j,x=-1;
    int n;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        if(x<1)
        {
            for (j=1;j<=i;j++)
                cout<<"1";
        }
        else
        {
           for (j=1;j<=i;j++)
           {
               if(j==1||j==i)     
                cout<<i-1;       
               else
                cout<<"0";     
           }
        }
        cout<<endl;

        x++;
    }
    return 0;
}