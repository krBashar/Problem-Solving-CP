#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,x,y,z;
    deque<int> dq;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>x;

        for(int j=0; j<x; j++)
        {
            cin>>y;
            if(dq.empty())
                dq.push_front(y);
            else
            {
                if(dq.front()>y)
                    dq.push_front(y);
                else
                    dq.push_back(y);
            }
        }

        deque<int>::iterator it;

        for (it = dq.begin(); it != dq.end(); ++it)
        cout <<*it<<" ";
        cout<<endl;

        dq.clear();
    }

    return 0;
}
