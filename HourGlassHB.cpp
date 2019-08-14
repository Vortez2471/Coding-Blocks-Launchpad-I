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
	    cin>>n;
        int rows = 2 * n + 1;     

        int nst = 2 * n + 1;     
        int nsp = 0;                
        for (int row = 1; row <= rows; row++) {
            int val;
            if (row <= n + 1) 
                val = n - row + 1;
            else
                val = row - n - 1; 

            for (int csp = 1; csp <= nsp; csp++) 
            {
                cout<<"  ";
            }

            for (int cst = 1; cst <= nst; cst++) 
            {
                cout<<val<<" ";

                if (cst <= nst/2)
                    val--;
                else
                    val++;
            }
            if (row <= n) 
            {
                nsp++;
                nst =nst- 2;
            } 
            else 
            {
                nsp--;
                nst =nst+ 2;
            }
            cout<<endl;
        }
        return 0;
}