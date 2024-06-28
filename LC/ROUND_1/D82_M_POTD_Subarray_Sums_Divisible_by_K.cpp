// D82_M_POTD_Subarray_Sums_Divisible_by_K
class Solution {
public:
    int subarraysDivByK(vector<int>& arr, int k) {
        int n=arr.size();
        int ans=0;
	    vector<int>pref(k,0);
	    int sum=0;
	    pref[0]=1;
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	        int rem=(sum%k+k)%k;
	        ans+=pref[rem];
	        pref[rem]++;
	    }
	    return ans;
    }
};

// Q:https://leetcode.com/problems/subarray-sums-divisible-by-k/?envType=daily-question&envId=2024-06-09