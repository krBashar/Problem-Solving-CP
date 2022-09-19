#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin>>x;
    string s;
    cin>>s;
    int count_1=0, count_0=0;

    for(int i=0; i<x; i++)
    {
        if(s[i]=='1')
            {count_1++;}
        else
            {count_0++;}
    }
    cout<<max(count_1, count_0) - min(count_1, count_0)<<endl;
}
