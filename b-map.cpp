#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,n;
    string s1, s2;
    cin>>x;

    for(int i=1; i<=x; i++)
    {
        cin>>n;

        stringstream ss;
        ss << n;
        s1 = ss.str();

        s2 = s1;

        reverse(s2.begin(),s2.end());
        if(s1 == s2)
            cout<<"Case "<<i<<": Yes"<<endl;
        else
            cout<<"Case "<<i<<": No"<<endl;
    }

    return 0;
}
