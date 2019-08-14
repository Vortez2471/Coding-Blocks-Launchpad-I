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
int main ()
{
    int t;
    cin>>t;
    int c1,c2,c3,c4,n,m;
    int i;
    int r[1004], c[1004];
    while (t--)
    {
        cin >>c1>>c2>>c3>>c4;
        cin >> n >> m;

        for (i = 0; i < n; i++)
            cin >> r[i];
        
        for (i = 0; i < m; i++)
            cin >> c[i];

        int cr = 0, cc = 0, mcost;

        for (i = 0; i < n; i++)
            cr += min(c1*r[i], c2);

        cr = min(cr, c3);

        for (i = 0; i < m; i++)
            cc += min(c1*c[i], c2);

        cc = min(cc, c3);
        int cost;
        cost = cc + cr;
        mcost = min(c4, cost);
        cout << mcost << endl;
    }
    return 0;
}