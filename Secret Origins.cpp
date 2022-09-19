#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        int num, res, count1=0, count2=0;
        cin>>num;

        string a = bitset<8>(num).to_string();

        for(int k=0; k<a.size(); k++)
        {
            if(a[k]=='1')
                count1++;
        }

        int p = num+1;

        for(int j = p; p>0 ; j++)
        {
            string b = bitset<8>(j).to_string();

            for(int k=0; k<b.size(); k++)
            {
                if(b[k]=='1')
                    count2++;
            }

            if(count1==count2)
            {
                res = j;
                cout<<"case "<<i<<": "<<res<<endl;
                break;
            }
        }
    }


    return 0;
}
