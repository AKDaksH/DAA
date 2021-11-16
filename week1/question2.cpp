#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],key;
        for(int i=0;i<n;i++)
            cin>>a[i];
        cin>>key;
        int start=0,end=n-1,comparisons=0;
        bool flag=false;
        while(start<=end){
            comparisons++;
            int mid = (start+end)/2;
            if(a[mid]==key){
                flag=true;
                break;
            }
            else if(a[mid]<key)
                start = mid+1;
            else if(a[mid]>key)
                end =mid-1;
        }
        if(flag==true){
            cout<<"present "<<comparisons;
        }
        else    cout<<"not present "<<comparisons;
    }
    return 0;
}