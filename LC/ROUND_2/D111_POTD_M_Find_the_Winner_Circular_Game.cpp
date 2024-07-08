// 1823. D111_POTD_M_Find_the_Winner_Circular_Game
class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int>circle;
        for(int i=1;i<=n;i++) circle.push(i);
        while(circle.size()!=1){
            for(int i=0;i<k-1;i++){
                int skipFriend=circle.front();
                circle.push(skipFriend);
                circle.pop();
            }
            circle.pop();
        }
        return circle.front();
    }
};

// Q:https://leetcode.com/problems/find-the-winner-of-the-circular-game/?envType=daily-question&envId=2024-07-08