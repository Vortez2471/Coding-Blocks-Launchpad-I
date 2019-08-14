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

void search(int arr[40][40],int n,int m,int to_find) 
{
    for(int row = 0;row < n;) 
    {
        for(int col=m-1;col>=0 and row<n;) 
        {
            if(arr[row][col]==to_find) 
            {
                cout<<1;
                return;
            }
            else if(arr[row][col]>to_find) 
            {
                col--;
            }
            else 
            {
                row++;
            }
        }
    }
    cout<<0;
    return ;
}

int main() 
{
    int n, m;
    cin>>n>>m;
    int arr[40][40];
    
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++) 
            cin>>arr[i][j];
    int to_find;
    cin>>to_find;
    search(arr,n,m,to_find);

    return 0;
}
