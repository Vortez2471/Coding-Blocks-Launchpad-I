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
#define MAX_RLEN 50
#define ll long long
#define pb push_back
#define pii pair<ll,ll> 
#define N 200005
#define PI 3.1415926535
using namespace std;

void insertionSort(int arr[], int n)  
{  
    for (int i = 1; i < n; i++) 
    {  
        int key = arr[i];  
        int j = i - 1;  
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
}  

int main()  
{  
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
      cin>>arr[i];  
  
    insertionSort(arr, n);

    for (int i = 0; i < n; i++)  
        cout << arr[i] << endl;
    
}  
