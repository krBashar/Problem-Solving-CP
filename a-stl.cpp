#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,dust_unit,x;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        cin>>n;
        dust_unit = 0;
        for(int j=0; j<n; j++)
        {
            cin>>x;
            if(x>0)
                dust_unit += x;
        }
        cout<<"Case "<<i<<": "<<dust_unit<<endl;
    }

    return 0;
}
