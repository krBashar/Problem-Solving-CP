#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {

        string s;
        cin>>s;
        int x = s.length();

        int ans = 0;

        stack <char> st;

        for(int j=0; j<x; j++)
        {
             if(s[j] == '<')
                st.push(s[i]);

            else if(s[j] == '>'){
            if(st.empty())
                break;
            else{
                st.pop();
                if(st.empty())
                    ans = j + 1;
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
