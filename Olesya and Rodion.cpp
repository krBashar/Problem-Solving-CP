#include<bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    int x, y;
    cin>>x>>y;

    string s;

    if(x==1 && y==10)
        cout<<"-1"<<endl;

    else if(y==10)
    {
        s="1";
        for(int i=1; i<x; i++)
        {
            s+="0";
        }
    }

    else
    {
        stringstream ss;
        ss<<y;
        string s1;
        ss>>s1;
        s=s1;
        for(int i=1; i<x; i++)
        {
            s=s+s1;
        }
    }

    cout<<s<<endl;
    return 0;
}
