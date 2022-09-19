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
    cout<< vertex <<endl;

    vis[vertex] = true;
    for(int child: g[vertex])
    {
        cout<<"Parent: "<<vertex<<" , Child: "<<child<<endl;
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
    dfs(1);

/*Graph:

6 9
1 3
1 5
3 5
3 4
3 6
3 2
2 6
4 6
5 6   */



    return 0;
}
