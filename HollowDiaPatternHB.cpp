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
    int n;
    cin >> n;

    int nst = (n/2) + 1;
    int nsp = -1;
    int rows = 1;
    while(rows <= n)
    {

        int cst = 1;
        while(cst <= nst)
        {

            cout<<"*\t";
            cst++;
        }

        int csp = 1;
        while(csp <= nsp)
        {
            cout<<" \t";
            csp++;
        }

        cst = 1;
        if(rows == 1 || rows == n) 
            cst = 2; 

        while(cst <= nst)
        {

            cout<<"*\t";
            cst++;
        }
        if(rows <= n/2)
         {
            nsp += 2;
            nst--;
         }
        else
         {
            nsp -= 2;
            nst++;
         }
            rows++;
            cout<<endl;
    }
    return 0;
}