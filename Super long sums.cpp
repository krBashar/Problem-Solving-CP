#include<bits/stdc++.h>

using namespace std;

int arr[1000000] = {0};

int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        int num,n,m;
        cin>>num;
        for(int j=0; j<num; j++)
        {
            cin>>n>>m;

            arr[j] = n+m;
        }

        int temp1 = 0;
        int temp2 = 0;

        for(int l=num-1; l>=0; l--)
        {

            temp1 = arr[l] + temp2;
            arr[l] = temp1%10;
            temp2 = temp1/10;


       /*     temp1 = temp2 + arr[l];

            if(temp1<10)
               {
                   arr[l] = temp1;
                   temp2 = 0;
               }

            else
            {
                arr[l] =  temp1%10;
                temp2 = temp1/10;
            } */

        }

        for(int k=0; k<num; k++)
        {
            cout<<arr[k];
        }
        if(i<t-1)
            cout<<endl;
        cout<<endl;

        memset(arr,0,sizeof(arr));
    }

    return 0;
}
