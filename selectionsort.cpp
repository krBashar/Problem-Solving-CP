#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(x>2020)
        {
            if(x%2020==0 || x%2021==0 || (x-2021)%2020==0 || (x-2020)%2021==0)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }

        else
            cout<<"NO"<<endl;
    }

    return 0;
}
