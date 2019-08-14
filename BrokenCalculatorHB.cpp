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
#define MAX 2000
using namespace std;

int multiply(int x, int arr[], int arr_size) 
{ 
	int carry = 0;

	for (int i=0; i<arr_size; i++)
	{
	    int prod = arr[i] * x + carry;
	    arr[i] = prod % 10;  
	    carry  = prod/10;    
	}

	while (carry)
	{
	    arr[arr_size] = carry%10;
	    carry = carry/10;
	    arr_size++;
	}
	return arr_size;

}

void factorial(int n) 
{ 
	int arr[MAX];
	arr[0] = 1;
	int arr_size = 1;

	for (int x=2; x<=n; x++)
	{
	    arr_size = multiply(x, arr, arr_size);
	}

	for (int i=arr_size-1; i>=0; i--)
	    cout << arr[i];

}


int main() 
{ 
	int n; 
	cin>>n; 
	factorial(n); 

	return 0; 
}