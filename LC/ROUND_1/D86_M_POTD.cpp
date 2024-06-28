// 2037. D86_M_POTD
class Solution {
public:                 // TC: O(n+k) k=100
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int mx=100;                      
        vector<int>seatCount(mx+1,0);
        vector<int>studCount(mx+1,0);
        for(auto val:seats) seatCount[val]++;
        for(auto val:students) studCount[val]++;
        int i=0,j=0,ans=0;
        while(i<=mx && j<=mx){
            while(i<=mx && seatCount[i]==0) i++;
            while(j<=mx && studCount[j]==0) j++;
            if(i<=mx && j<=mx){
                int count=min(seatCount[i],studCount[j]);
                ans+=count*abs(j-i);
                seatCount[i]-=count;
                studCount[j]-=count;
            }
        }
        return ans;  
    }
};

// Q;https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/?envType=daily-question&envId=2024-06-13
// A:https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/solutions/5304428/all-the-3-approaches-along-with-optimized-o-n-approach-c-java-python