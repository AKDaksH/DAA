#include<iostream>
using namespace std;

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
        bool flag=false;
        int i=1,min =0, comp=0;

        while(a[i]<key && i<n){
            comp++;
            min=i;
            i*=2;
        }
        if(i>n)
            i=n-1;
        for(int j=min;j<=i;j++,comp++)
            if(a[j]==key)
               { flag=true;break;}

        if(flag)
            cout<<"present "<<comp;
        else    cout<<"not present "<<comp;
    }
    return 0;
}