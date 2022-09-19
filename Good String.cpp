#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,x;
    string s;

    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>x;
        cin>>s;
        int count1=0;
        int count2=0;

        if(s.size()==1)
        {
            cout<<0<<endl;
            continue;
        }

        else if(s.size()==2)
        {
            if(s[0]=='<' && s[1]=='>')
                cout<<1<<endl;
            else
                cout<<0<<endl;

            continue;
        }

        for(int j=x-1; j>=0; j--)
        {
            if(s[j]=='<')
                {
                    count1 = j+1;
                    break;
                }
        }

        for(int j=0; j<x; j++)
        {
            if(s[j]=='>')
            {
                count2 = j;
                break;
            }

        }

        count1 = (x - count1);

        cout<<min(count1, count2)<<endl;

    }
    return 0;
}
