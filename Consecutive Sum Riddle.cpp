#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    long long n,t,i;
    cin>>t;

    for(i=0; i<t; i++)
    {
        cin>>n;
        cout<<-(n-1)<<" "<<n<<endl;
    }
    return 0;
}
