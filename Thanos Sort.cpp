#include<bits/stdc++.h>

using namespace std;

int calc(int arr[], int s, int e)
{
    int count = 1, count1 = 1, count2 = 1, max1 = 0, max2 = 0, mid = (s+e)/2;

        if(s+1==e)
            {
                if(arr[s]<=arr[e])
                    return 2;
                else return 1;
            }

        for(int i=s; i<e; i++)
        {
            if(arr[i]<=arr[i+1])
            count++;
        }

        if(count==(e-s+1))
        {
            return count;
        }

        for(int i = s; i<mid; i++)
        {
            if(arr[i]>arr[i+1])
            {
                max1 = max(max1,count1);
                count1 = 1;
            }
            else
            {
                count1++;
            }
            if(count1==(mid-s)+1)
                return count1;
        }

    for(int i = mid+1; i<e; i++)
        {
            if(arr[i]>arr[i+1])
            {
                max2 = max(max2,count2);
                count2 = 1;

            }
            else
              {
                 count2++;
              }

            if(count2==(e-mid))
                return count2;
        }

    if(max1>max2)
    {
        return calc(arr, s, mid);
    }
    else
    {
        return calc(arr, mid+1, e);
    }

    return 1;
}

int main()
{
    int t;
    cin>>t;

    int start = 0;
    int end = t-1;

    int arr[t];

    for(int i=0; i<t; i++)
    {
        cin>>arr[i];
    }

    cout<<calc(arr, start, end)<<endl;

    return 0;
}
