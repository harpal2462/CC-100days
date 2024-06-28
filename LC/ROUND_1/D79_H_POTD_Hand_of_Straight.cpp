// 846. D79_H_POTD_Hand_of_Straight
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0) return false;
        map<int,int>m;
        for(auto h:hand) m[h]++;
        for(auto [h,freq]: m){
            if(freq==0) continue;
            while(freq--){
                for(int cur=h;cur<h+groupSize;cur++){
                    if(m[cur]==0) return false;
                    m[cur]--;
                }
            }
        }
        return true;
    }
};

// Q:https://leetcode.com/problems/hand-of-straights/?envType=daily-question&envId=2024-06-06
// A:https://www.youtube.com/watch?v=CnMwFyoD0Bk