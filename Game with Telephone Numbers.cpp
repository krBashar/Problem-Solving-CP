#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    int count = 0;

    while(n>11)
    {
        if(count%2==0)
        {
            for(int j=0; j<n; j++)
            {
                if(s[j]!='8')
                {
                    s.erase(j,1);
                    count++;
                    break;
                }
            }
        }
        else
        {
            for(int j=0; j<n; j++)
            {
                if(s[j]=='8')
                {
                    s.erase(j,1);
                    count++;
                    break;
                }
            }
        }
        n--;
    }

    if(s[0]=='8')
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}
