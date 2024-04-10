// 950. Reveal Cards In Increasing Order
class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) { // deck=[17,13,11,2,3,5,7]
        deque<int>index;
        vector<int> ans(deck.size());
        sort(deck.begin(),deck.end());    //[2,3,5,7,11,13,17]

        for(int i=0;i<deck.size();i++){
            index.push_back(i);           // [0,1,2,3,4,5,6]
        }

        for(int card: deck ){
            int idx=index.front();
            index.pop_front();
            ans[idx]=card;
            if(!index.empty()){
                index.push_back(index.front());
                index.pop_front();
            }            
        }
        return ans;                      // [2,13,3,11,5,17,7]
    }
};

// Q:https://leetcode.com/problems/reveal-cards-in-increasing-order/description/?envType=daily-question&envId=2024-04-10
// A: https://leetcode.com/problems/reveal-cards-in-increasing-order/solutions/5001469/faster-lesser-detailed-explaination-sorting-deque-step-by-step-explaination-python-java-c