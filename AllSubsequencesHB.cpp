//https://www.youtube.com/watch?v=KCEPvdLqlYI
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
vector<string>vec;
void generate(string input,string output)
{
  if(input.length()==0)
  {
  	vec.push_back(output);
  	return;
  }
  generate(input.substr(1),output+input[0]);
  generate(input.substr(1),output);          //Substr(1)...gives the string from 1 index

}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
  	string s;
  	cin>>s;

  	generate(s,"");
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++)
      cout<<vec[i]<<endl;
    vec.clear();
  }
	return 0;
}