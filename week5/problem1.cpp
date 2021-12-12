#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int ch[26]={0};
        int max=0;
        for(int i=0;i<n;i++){
            ch[int(a[i])-97]++;
            if(ch[int(a[i])-97]>ch[max])
                max=int(a[i])-97;
        }
        if(ch[max]>1)
            cout<<char(max+97)<<"-"<<ch[max];
        else    cout<<"no duplicate found";
    }
    return 0;
}
