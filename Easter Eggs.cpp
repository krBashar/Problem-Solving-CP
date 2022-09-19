#include <bits/stdc++.h>

using namespace std;

#define endl "\n"


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n;
    cin>>n;



    string s = "ROYGBIV";

    int x = n%7;
    int  y = (n-7)/7;

    for(int i=0; i<y; i++)
    {
        s = s + s;
    }

    for(int i=0; i<7; i++)
    {
        if(x==i)
        {
            s = s + s.substr(0,i);
        }
    }

    cout<<s<<endl;

    return 0;
}
