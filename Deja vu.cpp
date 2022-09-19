#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{
    int t,count;
    string s,s1,s2,s3;

    cin>>t;

    for(int i=0; i<t; i++)
    {
            count=0;
            cin>>s;

    for(int k=0; k<s.length(); k++)
        {
            if(s[k]=='a')
                count++;

        }

    if(count==s.length())
        {
            cout<<"NO"<<endl;
            continue;
        }

    s1 = 'a'+s;
    s2 = s+'a';

    s3 = s1;

    reverse(s3.begin(), s3.end());

    if(s1==s3)
        {
           cout<<"YES"<<endl;
           cout<<s2<<endl;
        }

    else
        {
            cout<<"YES"<<endl;
            cout<<s1<<endl;
        }

    }

    return 0;
}
