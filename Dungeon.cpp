#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,a,b,c;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>a>>b>>c;

        int sum = a+b+c;
        int count = 9;
        int flag = 0;

        while(true)
        {
            if(sum%9==0 && min(min(a,b),min(b,c))>=(sum/9))
            {
                flag=1;
                break;
            }
            else if(count<sum)
                count = count*2;
            else
                {
                    break;
                }
        }

        if(flag==0)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }

    return 0;
}
