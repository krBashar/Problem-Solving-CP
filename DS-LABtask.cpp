#include<iostream>
#include<string>

using namespace std;

int main()
{
    string Id,x,y;            //"17-12345-2";
    int a,b,z=0;

    cin>>Id;

    if(Id[0]!='0' && Id[0]!='1' && Id[0]!='2')
        z=1;

    else if(Id[2]!='-' || Id[8]!='-')
        z=1;

    else if(Id[9]!='1' && Id[9]!='2' && Id[9]!='3')
        z=1;

    if(z==0)
    {
        cout<<"Valid ID"<<endl;

        x = Id.substr(0,1);
        y = Id[9];

        a = stoi(x);
        b = stoi(y);

        cout<<a<<b<<endl;
    }
    else
        cout<<"Invalid ID"<<endl;



    return 0;
}
