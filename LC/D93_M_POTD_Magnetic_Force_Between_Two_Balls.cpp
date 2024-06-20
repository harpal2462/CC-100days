// 1552. D93_M_POTD_Magnetic_Force_Between_Two_Balls
class Solution {
public:
    bool isValidDist(vector<int>& position,int mid,int m){
        int balls=1;
        int prevIndex=0;
        for(int i=1;i<position.size();i++){
            if(position[i]-position[prevIndex]>=mid){
                balls++;
                prevIndex=i;
            }
        }
        return (balls>=m);
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int l=0,ans=-1;
        int r=*max_element(position.begin(),position.end());
        while(l<=r){
            int mid= l+(r-l)/2;
            if(isValidDist(position,mid,m)){
                ans=mid;
                l=mid+1;
            }else r=mid-1;
        }
        return ans;
    }
};

// Q:https://leetcode.com/problems/magnetic-force-between-two-balls/?envType=daily-question&envId=2024-06-20
// A:https://www.youtube.com/watch?v=MXnZPSPqkBM