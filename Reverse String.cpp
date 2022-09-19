#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;

    string s1, s2;

    while(n--)
    {
        cin>>s1>>s2;

        string x, y;
        int z = -1;

        for(int i=0; i<s1.size(); i++)
        {
            x = s1.substr(0,i+1);
            y = s1.substr(0,i);
            reverse(y.begin(),y.end());
            x = x + y;
            if(x.find(s2)!= string::npos)
                {
                    z = 1;
                    break;
                }

        }

        if(z==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
