#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    char c[100];
    int up=0,count=0;
    cin>>s;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            up++;
    }

    if(up==s.length())
        {
            for(int j=0; j<s.length(); j++)
            c[j] = tolower(s[j]);
            count++;
        }

    else if((up==s.length()-1) && (s[0]>='a' && s[0]<='z'))
        {
            c[0] = toupper(s[0]);
            for(int j=1; j<s.length(); j++)
            c[j] = tolower(s[j]);
            count++;
        }

    if(count !=0)
    {
        for(int k=0; k<s.length(); k++)
        {
            cout<<c[k];
        }
    }

    else
        cout<<s<<endl;
    return 0;
}
