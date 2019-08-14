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
        int nsp1 = n-1;       
        int nsp2 =-1;          
        int nst =1;            

        for (int row = 1; row <= n; row++) 
        {

            int val;     

            if (row <= n / 2 + 1) 
            {
                val = row;           
            }
            else 
            {
                val = n - row + 1;   
            }

            for (int csp = 1; csp <= nsp1; csp++) 
            {
                cout<<"  ";
            }

            for (int cst = 1; cst <= nst; cst++) 
            {
                cout<<val<<" ";
                val-- ;
            }

            for (int csp = 1; csp <= nsp2; csp++) 
            {
                cout<<"  ";
            }

            int cst = 1;
            val++ ;
            if (row == 1 || row == n) 
            {
                cst = 2;

            }

            
            for (; cst <= nst; cst++) 
            {
                cout<<val<<" ";
                val++ ;
            }

            if (row <= n / 2) {
                nsp1 =nsp1- 2;
                nst++;
                nsp2 =nsp2+ 2;
            }
            else 
            {
                nsp1 =nsp1+ 2;
                nst--;
                nsp2 =nsp2- 2;
            }
            cout<<endl;;
        }
        return 0;
}