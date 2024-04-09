// 2073. Time Needed to Buy Tickets

// Optimal solution O(N)
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans=0;
        for(int i=0;i<tickets.size();i++){

            if(i<=k) ans+=min(tickets[i],tickets[k]);
            else     ans+=min(tickets[i],tickets[k]-1);
        }
        return ans;
    }
};

// Brute Force (O(n^2))
// class Solution {  
// public:
//     int timeRequiredToBuy(vector<int>& tickets, int k) {
//         int ans=0;
//         while(tickets[k]>0){
//             for(int i=0;i<tickets.size();i++){
//                 if(tickets[i]!=0){
//                     ans++;
//                     tickets[i]--;
//                 }
//                 if(tickets[k]==0) break;
//             }
//         }
//         return ans;
//     }
// };

// Q: https://leetcode.com/problems/time-needed-to-buy-tickets/?envType=daily-question&envId=2024-04-09