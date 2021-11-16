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

        int key ;
        cin>>key;
        bool flag=false;
        for(int i=0;i<n;i++)
            if(a[i]==key){
                cout<<"present "<<i+1;
                flag=true;
                break;
            }

        if(flag==false)
            cout<<"not present "<<sizeof(a);
    }
    return 0;
}