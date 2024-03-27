#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
           string s;
           cin>>s;
           int t1=0,t0=0;
           for(int i=0;i<s.size();i++){
               if(s[i]=='1') t1++;
               else t0++;
           }
           if(t1==1 or t0==1) cout<<"Yes"<<endl;
           else cout<<"No"<<endl;

    }
   

}
