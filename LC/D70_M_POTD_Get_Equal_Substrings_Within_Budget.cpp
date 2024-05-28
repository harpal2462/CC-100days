// 1208. D70_M_POTD_Get_Equal_Substrings_Within_Budget
class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n=s.size();
        vector<int>v(n);
        for(int i=0;i<n;i++){
            v[i]=abs(s[i]-t[i]);
        }
        int i=0,j=0;
        int ans=0,sum=0;
        while(j<n){
            sum+=v[j];
            if(sum<=maxCost) ans=max(ans,(j-i+1));
            else{
                while(sum>maxCost){
                    sum-=v[i];
                    i++;
                }
            }
            j++;
        }
        return ans;
    }
};

// Q:https://leetcode.com/problems/get-equal-substrings-within-budget/?envType=daily-question&envId=2024-05-28