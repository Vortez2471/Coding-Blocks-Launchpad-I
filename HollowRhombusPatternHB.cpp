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
    int n;
    cin >> n;
        int nst=n;
        int nsp=n-1;      
        for(int i=1;i<=n;i++) 
        {

            for (int csp=1;csp<=nsp;csp++) 
                cout<<" ";

            for (int cst=1;cst<=nst;cst++)
                cout<<"*";
            
            if (i>1&&i<n) 
            {
                for (int csp=1;csp<=n-2;csp++) 
                {
                    cout<<" ";
                }
                cout<<"*";
            }

            if (i>=1&&i<n-1)
                nst=1;  
            else 
                nst=n;

            nsp=nsp-1;
            cout<<endl;
        }
    return 0;
}