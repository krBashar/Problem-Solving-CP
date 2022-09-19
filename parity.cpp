#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,a,b;
    cin>>x;

    for(int i=1; i<=x; i++)
    {
        cin>>a;
        b=0;
        for(int j=0; a!=0 ;j++)
        {
            if(a%2==1)
                b++;
            a=a/2;
        }
        if(b%2==0)
            cout<<"Case "<<i<<": even"<<endl;
        else
            cout<<"Case "<<i<<": odd"<<endl;
    }
    return 0;
}
