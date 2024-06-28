// 1482. D92_M_POTD_Minimum_Number_Days_Make_Bouquets
class Solution {
public:
    bool checkBloom(vector<int>bloomDay,int mid,int m,int k){
        int count=0, numOfBouq=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid) count++;
            else count=0;
            if(count==k){
                numOfBouq++; 
                count=0;
            }
        }
        return (numOfBouq>=m);
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long)m*k > bloomDay.size()) return -1;
        int l=1;
        int r=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        while(l<=r){
            int mid= l+(r-l)/2;
            if(checkBloom(bloomDay,mid,m,k)){
                ans=mid;
                r=mid-1;
            }else l=mid+1;
        }
        return ans;
    }
};

// Q:https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/?envType=daily-question&envId=2024-06-19
// A:https://www.youtube.com/watch?v=w24SIuukcZI