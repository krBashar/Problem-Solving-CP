#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, count1, count2;
    string s;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        count1=0;
        count2=0;
        cin>>s;

        for(int j=0; j<s.size(); j++)
        {
            if(s[j]=='B')
                count1++;
            else
                count2++;
        }
        if(count1==count2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
