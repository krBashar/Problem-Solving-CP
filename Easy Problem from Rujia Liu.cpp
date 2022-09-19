#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,x,y,z;
    while(scanf("%d", &n) == 1)
    {
        cin>>m;

        map <int, vector<int> > mymap;

        for(int i=0; i<n; i++)
        {
            cin>>x;

            if(mymap.find(x)==mymap.end())
                mymap[x].push_back(i+1);
            else
                {
                    mymap.insert(pair<int,vector<int> >(x, vector<int>()));
                    mymap[x].push_back(i+1);
                }
        }

        for(int j=0; j<m; j++)
        {
            cin>>y>>z;

           if(mymap.find(z)==mymap.end())
                cout<<"0"<<endl;
           else if(mymap[z].size()<y)
                cout<<"0"<<endl;
           else
                cout<<mymap[z][y-1]<<endl;
        }
    }
    return 0;
}
