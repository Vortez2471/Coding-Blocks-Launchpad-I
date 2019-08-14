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

        int rows = 2*n+1; 

        int nst = 1;           
        int nsp = 2*n-1;     
        for (int row = 1; row <= rows; row++) 
        {
            int val = n;

            for (int cst = 1; cst <= nst; cst++) 
            {
                cout<<val<<" ";
                val--;
            }

    
            for (int csp = 1; csp <= nsp; csp++) 
            {
                cout<<"  ";
            }

            int cst = 1;
            if (row == n + 1) 
            {
                cst = 2;
                val =val+ 2;
            } 
            else 
            {
                cst = 1;
                val++;
            }

           
            for (; cst <= nst; cst++) 
            {
                cout<<val<<" ";
                val++;
            }


       
            if (row <= n) 
            {
                nsp -= 2;
                nst++;
            }
            else 
            {
                nsp += 2;
                nst--;
            }
            endl;
        }
        return 0;
}