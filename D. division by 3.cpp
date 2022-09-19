#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,a,b;
    cin>>x;

    for(int i=1; i<=x; i++)
    {
        int z=0;
        cin>>a>>b;
        for(int j=a; j<=b; j++)
        {
            if(j%3!=1)
                z++;
        }
        cout<<"Case "<<i<<": "<<z<<endl;
    }
    return 0;
}
