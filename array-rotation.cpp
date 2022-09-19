#include <iostream>

using namespace std;


void selectionSort(int arr[], int arrayLength)
{
    int i;
    for(i=0;i<arrayLength-1;i++)
    {
        int j;
        int k;

        k = i;
        //Find the minimum value from position i to end of the array
        for(j=i+1;j<arrayLength;j++)
        {
            if(arr[j]<arr[k])
                k=j;
        }

        //Swap the value of index i and k
        int temp;
        temp = arr[i];
        arr[i] = arr[k];
        arr[k] = temp;
    }
}


void insertionSort(int arr[], int arrayLength)
{
    int i;
    for(i=1;i<arrayLength;i++)
    {
        int j;
        int v;
        v=arr[i];
        j=i-1;
        while(arr[j]>v && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1] = v;
    }
}


int main()
{
    int a[] = {5,2,10,9,5,3,8};
    insertionSort(a,7);

    int i;
    for(i=0;i<7;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
