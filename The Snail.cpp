#include<bits/stdc++.h>

using namespace std;

int main()
{
    double h,u,d,f;

    while(true)
    {
        double z=0;
        cin>>h>>u>>d>>f;

        if(h==0)
            break;
        else
        {
            double p = u*(f/100);
            for(int i=1;i>0;i++)
            {

                if(u>=0)
                {
                    z=z+u;
                }

                if(z>h)
                {
                    cout<<"success on day "<<i<<endl;
                    break;
                }

                z=z-d;
                u=u-p;
                if(z<0)
                {
                    cout<<"failure on day "<<i<<endl;
                    break;
                }
                //u=u-p;
            }
        }
    }

    return 0;
}
