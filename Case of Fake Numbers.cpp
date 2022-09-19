#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin>>x;
    int arr[x],flag=0,steps;

    for(int i=0; i<x; i++)
    {
        cin>>arr[i];
    }

    steps = x-arr[0];

    for(int i=0; i<x; i++)
    {
        if((i%2)==0)
            {
                if((arr[i]+steps)>(x-1))
                    {
                        arr[i] = ((arr[i]+steps)-x);
                    }
                else
                    arr[i] = arr[i] + steps;

            }
        else
        {
            if((arr[i]-steps)<0)
                arr[i] = x+(arr[i]-steps);
            else
                arr[i] = (arr[i]-steps);
        }
    }

    for(int i=0; i<x; i++)
    {
        if(arr[i]!=i)
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;


    return 0;
}
