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

    for (int i = 1; i<= n; i++)
    {
        if (i%2 != 0 || i == 2)
            {
                for (int j = 1; j<= i; j++)
                    cout << "1";
                cout << endl;
            }
        else if (i%2 == 0 && i != 2)
            {
                for (int k = 1; k<= i; k++)
                {
                    if (k == 1 || k == i)
                        cout << "1";    
                    else
                        cout << "0";   
                }
                cout << endl;
            }

    }
    return 0;
}
