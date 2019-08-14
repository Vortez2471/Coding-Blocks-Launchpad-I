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
    int nst=1;
    int fi=0;
    int sec=1;
    while(n--)
    {
        int cst=1;
        while(cst<=nst)
        {

            cout<<fi<<"\t";
            int third=fi+sec;
            fi=sec; 
            sec=third;
            cst++;
        }
            nst++;
            cout<<endl;
    }
    return 0;
}