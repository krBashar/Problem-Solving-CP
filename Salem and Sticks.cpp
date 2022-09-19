#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n,sum=INT_MAX,t=0,res;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int j=1; j<=100; j++)
    {
        res=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]==j || (arr[i]-1)==j || (arr[i]+1)==j)
                continue;
            else if(arr[i]>j)
            {
                res = res + (arr[i]-j-1);
            }
            else
            {
                res = res + (j-arr[i]-1);
            }
        }
        if(res<sum)
        {
            sum = res;
            t = j;
        }
    }

    cout<<t<<" "<<sum<<endl;

    return 0;
}
