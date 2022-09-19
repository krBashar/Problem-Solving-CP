#include <bits/stdc++.h>

using namespace std;

bool prime[1299709];

void SieveOfEratosthenes()
{
   memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= 1299709; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= 1299709; i += p)
                prime[i] = false;
        }
    }
}

void length_between_primes(int num)
{
    long long n,m;

    for (int p = 2; p <= 1299709; p++)
    {
        if (prime[p])
        {
            if(p==num)
            {
                cout<<0<<endl;
                return;
            }
            else if(p<num)
            {
                n = p;

            }
            else
            {
                m = p;
                cout<<m-n<<endl;
                return;

            }
        }
    }
}


int main()
{

   // freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);

    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int num;

    SieveOfEratosthenes();


    while(cin>>num)
    {
        if(num==0)
            break;
        else
            length_between_primes(num);
    }

    return 0;
}
