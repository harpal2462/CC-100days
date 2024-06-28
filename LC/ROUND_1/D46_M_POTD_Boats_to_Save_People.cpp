// 881. D46_M_POTD_Boats_to_Save_People
class Solution {
public:
    int numRescueBoats(vector<int>& a, int limit) {
        int ans=0;
        int n=a.size();
        sort(a.begin(),a.end());
        int i=0,j=n-1;
        while(i<=j){
            if(a[i]+a[j]<=limit){
                i++;
                j--;
            }else{
                j--;
            }
            ans++;
        }   
        return ans;
    }
};

// Q:https://leetcode.com/problems/boats-to-save-people/?envType=daily-question&envId=2024-05-04