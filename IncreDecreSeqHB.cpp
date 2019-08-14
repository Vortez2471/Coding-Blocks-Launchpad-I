#include<iostream>
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

bool incdec(int n)
{

        int prev;
        cin>>prev;
        bool goingUp = false;
        bool isValid = true;

        while(n--)
        {

            int curr;
            cin>>curr;
            
            int diff = curr - prev;
            if(diff == 0)
                isValid = false;
            else if(diff > 0)
                goingUp = true;
            else if(goingUp && diff < 0)
                isValid = false;

            prev = curr;
        }

        return isValid;
}

int main()
{
	int n;
	cin>>n;
	if(incdec(n))
	    cout<<"true"<<endl;
	else
		cout<<"false"<<endl;
}