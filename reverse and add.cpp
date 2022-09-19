#include<bits/stdc++.h>

using namespace std;
int c;
long long int reverse_num(long long int num, long long int reversedNum)
{

     if(num==0)
        return reversedNum;

     reversedNum = reversedNum*10 + (num%10);
     return reverse_num(num/10, reversedNum);


}

long long int add_num(long long int num)
{
    long long int n = num;

    long h = reverse_num(n,0);
    if(h == num)
        cout<<c<<" "<<num<<endl;
    else
    {
        c++;
        return add_num(num+h);
    }
}


int main()
{
    int t;
    long long int x;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        c = 0;
        cin>>x;
        add_num(x);
    }

    return 0;
}
