#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, count_1=0, count_2=0, count_3 = 0, count_4 = 0, count=0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(x==1)
            count_1++;
        else if(x==2)
            count_2++;
        else if(x==3)
            count_3++;
        else
            count_4++;
    }

    count = count_4 + count_3;

    if(count_1>=count_3)
    {
        count_1 = count_1 - count_3;
    }
    else
    {
        count_1 = 0;
    }

    if(count_2%2==0)
    {
        count = count + count_2/2;
    }
    else
    {
        count = count + 1 + count_2/2;
        if(count_1>2)
            count_1 = count_1 - 2;
        else
            count_1 = 0;
    }

    if(count_1!=0)
        count = count + (count_1 + 3)/4 ;

    cout<<count<<endl;

    return 0;
}
