#include<bits/stdc++.h>

using namespace std;

void func_for_sqrt()
{
    int num;
    while(cin>>num)
    func_for_sqrt();
    cout<<setprecision(4)<<fixed<<sqrt(num)<<endl;
}

int main()
{
    func_for_sqrt();

    return 0;
}
