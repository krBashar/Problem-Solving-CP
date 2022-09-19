#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;
    cin>>s1;

    s2 = s1;

    s1.pop_back();

    reverse(s1.begin(),s1.end());

    s2 =  s2 + s1;

    cout<<s2<<endl;

    return 0;
}
