#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pii pair<ll,ll>
#define N 200005
#define PI 3.1415926535


int main()
{
   long q,k;
   cin>>q>>k;
   vector<long long> v3;
   while(q--)
   {
       long n,x,y;
       long long p;
       cin>>n;
       switch(n)
       {
           case 1:
              {
                  cin>>x>>y;
                  p=x*x+y*y;
                  v3.push_back(p);
                  if(v3.size()<k+1)
                     {
                        sort(v3.begin(),v3.end());
                     }
                  if(v3.size()==k+1)
                     {
                        sort(v3.begin(),v3.end());
                        v3.pop_back();
                     }
                  break;
              }
            case 2:
               {
                   cout<<v3.back()<<endl;
                   break;
               }
       }
   }


    return 0;
}