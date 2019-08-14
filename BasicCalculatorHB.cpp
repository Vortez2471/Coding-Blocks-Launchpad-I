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
void calculate(char ch)
{
	int n1,n2;
    cin>>n1>>n2;
			if(ch=='*')
				cout<<n1*n2<<endl;
			if(ch=='+')
				cout<<n1+n2<<endl;
			if(ch=='-')
				cout<<n1-n2<<endl;
			if(ch=='/'&&n2>0)
				cout<<n1/n2<<endl;
			if(ch=='%'&&n2>0)
				cout<<n1%n2<<endl;

}
int main()
{
		char ch;
		do 
		{
            cin>>ch; 
            if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%') 
            {
                calculate(ch);
            } 
            else 
            {
                if (ch != 'x' && ch != 'X')
                   cout<<"Invalid operation. Try again."<<endl;;
            }
        }
        while (ch != 'x' && ch != 'X');
}