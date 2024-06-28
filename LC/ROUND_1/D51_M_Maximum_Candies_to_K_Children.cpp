// 2226. D51_M_Maximum_Candies_to_K_Children  
// NICE Q ON BINARY SEARCH 
class Solution {
public:
    int maximumCandies(vector<int>& c, long long k) {
        int r= *max_element(c.begin(),c.end());
        int l=1;
        int ans=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            long long int sum=0;
            for(int i=0;i<c.size();i++){
                sum+=c[i]/mid;
            }
            if(sum<k) r=mid-1;        // We need fewer candies per child.
            else l=mid+1;             // sum>=k We can try more candies per child.
        }
        return r;   // At last incremented `l` making it too large therefore return r.
    }
};

// Q:https://leetcode.com/problems/maximum-candies-allocated-to-k-children/description/