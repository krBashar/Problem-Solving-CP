#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    double p,a,b,c,d,n,k,sum,res;

  //  while(cin>>p>>a>>b>>c>>d>>n)
    while(scanf("%lf %lf %lf %lf %lf %lf", &p, &a, &b, &c, &d, &n)==6)
    {
        res = 0;
        vector <double> vec;
        for(int i=1; i<=n; i++)
        {
            sum = p*(sin((a*i)+b)+cos((c*i)+d)+2);
            vec.push_back(sum);
        }

        double s;

        s = vec[0];

        for(int i=1; i<vec.size(); i++)
        {
                if(s>vec[i])
                    res = max(res, (s-vec[i]));
                else
                    s = vec[i];
        }

        printf("%lf\n", res);
    }

    return 0;
}
