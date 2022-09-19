#include <bits/stdc++.h>

using namespace std;

#define endl        "\n"
#define ll          long long
#define READ(x)     freopen(x,"r",stdin)
#define WRITE(x)    freopen(x,"w",stdout)
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb          push_back
#define mem(x,y)    memset(x,y,sizeof x )


int main()
{
    BOOST;

    ll n,w,a,b,res=0, capacity=0;

    vector< pair <ll,ll> > vec;

    cin>>n>>w;

    for(int i=0; i<n; i++)
    {
        cin>>a>>b;

        vec.pb(make_pair(a,b) );
    }

    sort(vec.begin(),vec.end());

    reverse(vec.begin(),vec.end());

    for(int i=0; i<vec.size(); i++)
    {
        if((capacity + vec[i].second)<=w)
        {
            res = res + (vec[i].first*vec[i].second);
            capacity = capacity + vec[i].second;
        }

        else if((w-capacity)<vec[i].second)
        {
            res = res + (vec[i].first*(w-capacity));
            break;
        }
        else
            break;
    }

    cout<<res<<endl;

    return 0;
}
