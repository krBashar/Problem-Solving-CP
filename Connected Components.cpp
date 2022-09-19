#include <bits/stdc++.h>

using namespace std;

#define endl        "\n"
#define ll          long long
#define READ(x)     freopen(x,"r",stdin)
#define WRITE(x)    freopen(x,"w",stdout)
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb          push_back
#define mem(x,y)    memset(x,y,sizeof x )




const int N = 1e5 + 10;
vector<int> g[N];
bool vis[N];

void dfs(int vertex)
{
 //   cout<< vertex <<endl;

    vis[vertex] = true;
    for(int child: g[vertex])
    {
     //   cout<<"Parent: "<<vertex<<" , Child: "<<child<<endl;
        if(vis[child])
            continue;

        dfs(child);
    }
}


int main()
{
    BOOST;
    int n, m;
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int v1, v2;
        cin>>v1>>v2;
        g[v1].pb(v2);
        g[v2].pb(v1);
    }

    ll cnt = 0;

    for(int i=1; i<=n; i++)
    {
        if(vis[i]) continue;

        dfs(i);
        cnt++;
    }

    cout<<"Connected Component : "<<cnt<<endl;

/*Graph:

    8 5
    1 2
    2 3
    2 4
    3 5
    6 7
      */



    return 0;
}
