#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2;
    int t, result;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>s1>>s2;
        long long x = 0, y = 0;

        for(int j=0; j<s1.size(); j++)
        {
            x = x + (s1[j]-'0');
        }

        for(int j=0; j<s2.size(); j++)
        {
            y = y + (s2[j]-'0');
        }

        result = ((x%3)*(y%3))%3;

        cout<<result<<endl;
    }

    return 0;
}
