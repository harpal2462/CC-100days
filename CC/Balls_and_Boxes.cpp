#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long  n,k;
        cin>>n>>k;
        int sum=(k*(k+1))/2;

        if(n>=sum) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    
    
    return 0;
}    