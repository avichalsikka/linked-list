 #include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int i;
        int a[n];
        for(i=0;i<n;i++)
            cin >> a[i];
            for(i=0;i<n;i++)
            {
                if(k-a[i]>=0)
                {
                    cout <<"1";
                    k=k-a[i];
                }
                    else
                    {
                      cout << "0";
                   }
            }
            cout << endl;
    }
}
