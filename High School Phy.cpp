#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    long long int t, x, count;

    cin>>t;

    while(t--)
    {
        cin>>x;
        count = 0;

        for(long long int i=1; ; i++)
        {
            if(i<=x)
            {
                x = x - i;
                count++;
            }
            else
                break;
        }

        cout<<count<<endl;
        if(t==0)
            break;
    }

    return 0;
}
