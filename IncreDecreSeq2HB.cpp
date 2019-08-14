#include <iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int arr[n];
   int left[n];
   left[0]=1;
   int right[n];
   right[n-1]=1;
   int c;

   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }

   for(int i=1;i<n;i++)
       {

         if(arr[i-1]>arr[i])
            left[i]=1;
         else
            left[i]=0;

         if(arr[n-i-1]<arr[n-i])
            right[n-i-1]=1;
         else
          right[n-i-1]=0;
      }
      for(int i=0;i<n-1;i++)
      {
        if(left[i]+right[i]==0)
         {
          c=1;
          break;
         }
         else
          c=0;
      }
     if(c==0)
      cout<<"true";
     else
      cout<<"false";

    return 0;
   }