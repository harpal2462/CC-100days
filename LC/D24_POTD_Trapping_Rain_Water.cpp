// 42. Trapping Rain Water
class Solution {
public:
    int trap(vector<int>& h) {
        int i=0,j=0;
        int ans=0,sum=0;
        while(j<h.size()){
            if(h[j]<h[i] or i==j) sum+=h[j];
            if(h[j]>=h[i] && i!=j){
                sum+=h[i];
                int Y_len=h[i];
                int X_len=j-i+1;
                ans+= (Y_len * X_len) - sum;
                sum=h[j];
                i=j;
            }
            j++;
        }
        if(i==h.size()-1) return ans;

        int r=h.size()-1,l=h.size()-1;
        sum=0;
        while(l>=i){
            if(h[l]<h[r] or l==r) sum+=h[l];
            if(h[l]>=h[r] && r!=l){
                sum+=h[r];
                int Y_len=h[r];
                int X_len=r-l+1;
                ans+=(X_len * Y_len)-sum;
                sum=h[l];
                r=l;
            }
            l--;
        }
        return ans;
    }
};

// Q: https://leetcode.com/problems/trapping-rain-water/?envType=daily-question&envId=2024-04-12
// A: https://leetcode.com/problems/trapping-rain-water/solutions/3401992/100-detailed-explaination-with-pictures-in-c-java-python-two-pointers