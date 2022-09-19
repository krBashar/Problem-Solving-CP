#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m,n,s,sum=0;
    cin>>m>>n;
    vector <int > vec;
    for(int i=0; i<m; i++)
    {
        cin>>s;
        vec.push_back(s);
    }

    sort(vec.begin(), vec.end());

    for(int i=0; i<n; i++)
    {
        if(vec[i]<=0)
            sum = sum + vec[i];
        else
            break;
    }
    cout<<abs(sum)<<endl;

    return 0;
}
