#include<iostream>
using namespace std;
int binarysearch(int *a,int l,int n,int key){
    int start=l,end=n;
    while(start<=end){
            int mid = (start+end)/2;
            if(a[mid]==key){
                return mid;
            }
            else if(a[mid]<key)
                start = mid+1;
            else if(a[mid]>key)
                end =mid-1;
        }
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)    
            cin>>a[i];
        int key;
        cin>>key;
        int flag2=-1,flage=0;
        for(int i=0;i<n;i++){

            flag2 = binarysearch(a,i+1,n-1,key-a[i]);
            if(flag2!=-1){
                cout<<a[i]<<" "<<a[flag2]<<endl;
                flage=1;
                flag2=-1;
            }
        }
        if(flage==0)
            cout<<"No Such pair Exist ";
    }
    return 0;
}