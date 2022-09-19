#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        int num1, num2, num3, num4, j=0;
        string temp, bn, s1, s2;

        int count=0;
        cin>>s1;
        cin>>s2;

        for(j=0; ; j++)
        {
            if(s1[j]!='.')
                temp = temp + s1[j];
            else
                {
                    count = j;
                    break;
                }
        }

        stringstream ss1;

        ss1 << temp;

        ss1 >> num1;

        temp.clear();

        for(j=count+1; ; j++)
        {
            if(s1[j]!='.')
                temp = temp + s1[j];
            else
                {
                    count = j;
                    break;
                }
        }

        stringstream ss2;

        ss2 << temp;

        ss2 >> num2;

        temp.clear();

        for(j=count+1; ; j++)
        {
            if(s1[j]!='.')
                temp = temp + s1[j];
            else
                {
                    count = j;
                    break;
                }
        }

        stringstream ss3;

        ss3 << temp;

        ss3 >> num3;

        temp.clear();

        int f=0;
        for(j=count+1; f<3 ; j++)
        {
            if(s1[j]!='.')
                temp = temp + s1[j];
            else
                {
                    count = j;
                    break;
                }
            f++;
        }

        stringstream ss4;

        ss4 << temp;

        ss4 >> num4;

        temp.clear();

        string a = bitset<8>(num1).to_string();
        string b = bitset<8>(num2).to_string();
        string c = bitset<8>(num3).to_string();
        string d = bitset<8>(num4).to_string();

        bn = a+"."+b+"."+c+"."+d;

        if(bn == s2)
            cout<<"Case "<<i<<": Yes"<<endl;
        else
            cout<<"Case "<<i<<": No"<<endl;
    }


    return 0;
}
