#include<iostream>
using namespace std;
void swap(int arr[],int i,int j)
{
    int k=arr[i];
    arr[i]=arr[j];
    arr[j]=k;
}
int partition(int arr[],int l,int r)
{
    int pi=arr[r];
    int i=l-1;
    int j;
    for(j=l;j<r;j++)
    {
        if(arr[j]<pi)
        {
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,j);
    return i+1;
}
void quick(int arr[],int l,int r)
{
    if(l<r)
    {
        int p=partition(arr,l,r);
        quick(arr,l,p-1);
        quick(arr,p+1,r);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int i,l=0,r=n-1;
        for(i=0;i<n;i++)
        cin>>arr[i];
        quick(arr,l,r);
        for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    }
}
