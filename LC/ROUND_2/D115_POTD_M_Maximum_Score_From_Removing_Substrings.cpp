// 1717. D115_POTD_M_Maximum_Score_From_Removing_Substrings
class Solution {
public:
    int maximumGain(string s, int x, int y) {    //     TC:O(N)           SC:O(N)
        stack<int>st1,st2;
        int ans=0;
        if(x>y){  // prefer ab
            for(auto ch: s){
                if(!st1.empty() and ch=='b' and st1.top()=='a'){   // will check for ab combinations
                    ans+=x;        //          |   |  if char in string s is b    
                    st1.pop();     // stack=>  | a |  and  st.top()=a  
                }else st1.push(ch);
            }

            while(!st1.empty()){                    // 1.Will be left with ba combinations.
                char st1TopELement= st1.top();      // 2.To check ba will have to push it to 
                st1.pop();                          //   another stack2 and check ab in stack2.

                if(!st2.empty() and st1TopELement=='b' and st2.top()=='a'){
                    ans+=y;                      // | a |    |  |    |   |   |   |
                    st2.pop();                   // | a |    |  |    |   |   |   |
                }else st2.push(st1TopELement);   // | b |    |  | -> | b |   | a |
            }                                    // |_b_|    |__|    |_b_|   |_a_|
                                               //    st1      st2     st1     st2

        }else{  // prefer ba--- just replace a<->b and x<->y in the above if condition
            for(auto ch: s){
                if(!st1.empty() and ch=='a' and st1.top()=='b'){
                    ans+=y;
                    st1.pop();
                }else st1.push(ch);
            }
            while(!st1.empty()){
                char st1TopELement= st1.top();
                st1.pop();

                if(!st2.empty() and st1TopELement=='a' and st2.top()=='b'){
                    ans+=x;
                    st2.pop();
                }else st2.push(st1TopELement);
            }
        }
        return ans;
    }
};