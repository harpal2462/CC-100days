#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int n,k;
	    cin>>n>>k;
	    long long int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    long long int ans = k;
	    vector<long long int > v;
	    for(int i=0;i<n;i++){
	        if(a[i]<=ans){
	            v.push_back(1);
	            ans=ans-a[i];
	        }
	        else v.push_back(0);
	    }
	    
	    for(int i=0;i<v.size();i++){
	        cout<<v[i];
	    }
	     cout<<endl;
	}
	return 0;
}
