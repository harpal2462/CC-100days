#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int sum=0;
	    for(int i=1;i<=n;i++){
	        if(i%2!=0) sum+=(n-i+1)*(n-i+1);
	    }
	    cout<<sum<<endl;
	}

}
