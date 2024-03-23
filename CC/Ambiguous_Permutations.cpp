#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int n;
    int a[100000+5],m[100000+5];
    while(true){
        cin>>n;
        if(n==0) break;
       
       
       int ans=0;
       
       for(int i=1;i<=n;i++){
           cin>>a[i];
           m[a[i]]=i;
       }
        for(int i=1;i<=n;i++){
           if(a[i]==m[i]) ans=1;
           else{
               ans=0;
               break;
           }
       }
       if(ans==1) cout<<"ambiguous"<<endl;
       else cout<<"not ambiguous"<<endl;
       


    }
    

}