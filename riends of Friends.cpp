#include<bits/stdc++.h>

using namespace std;

int main()
{
    set <int> f;

    int s, n, m, z, t=0, count=0;
    cin>>s;

    vector<int> vec;

    for(int i=0; i<s; i++)
    {
        cin>>z>>n;
        vec.push_back(z);

        for(int j=0; j<n; j++)
        {
            cin>>m;
            f.insert(m);
        }
    }

    set<int>::iterator itr;

    for(int i=0; i<vec.size(); i++)
    {
       for (itr = f.begin(); itr != f.end(); itr++)
        {
            if(vec[i]==*itr)
                count++;
        }
    }

    cout<<f.size()-count<<endl;

    return 0;
}
