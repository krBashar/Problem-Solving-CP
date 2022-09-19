#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(n)
    {
    int x,flag=0;
    cin>>n;

    vector<int>vec;

    if(n==1)
        flag=1;

    for(int i=0; i<n; i++)
    {
        cin>>x;
        vec.push_back(x);
    }

    for(int j=0; j<n; j++)
    {
        vec[j] = abs(vec[j]-vec[j+1]);
        if(vec[j]>9)
        {
            flag=1;
            break;
        }
    }

    if(flag!=1)
    {
        int n = abs(vec[0]-vec[1]);
        int m = abs(vec[1]-vec[2]);

        if(n==m)
            flag=1;

        else if(n>m)
        {
            for(int i=0; i<n; i++ )
            {
                if(vec[i]!=(vec[i+1]+1))
                {
                    flag=1;
                    break;
                }
            }
        }
        else
        {
            for(int i=0; i<n-1; i++ )
            {
                if(vec[i]!=(vec[i+1]-1))
                {
                    flag=1;
                    break;
                }
            }
        }
    }

        if(flag==0)
            cout<<"jolly"<<endl;
        else
            cout<<"Not jolly"<<endl;
    }

    return 0;
}
