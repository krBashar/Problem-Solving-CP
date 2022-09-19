#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,s, m, n;
    cin>>x;

    vector<int> vec;

    for(int i=0; i<x; i++)
    {
        cin>>s;
        vec.push_back(s);
    }

    int height_dif = abs(vec[0] - vec[x-1]);
    m = 1;
    n = x;
    for(int i=0; i<x; i++)
    {
        if(abs(vec[i] - vec[i+1])<height_dif)
        {
            height_dif = abs(vec[i] - vec[i+1]);
            m = i+1;
            n=i+2;
        }
    }

    cout<<m<<" "<<n<<endl;
    return 0;
}
