// 402. Remove K Digits
class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        for(int i=0;i<num.size();i++){
            while(!st.empty() && k>0 && num[i]<st.top()){
                st.pop();
                k--;
            }
            st.push(num[i]);
            if(st.size()==1 && num[i]=='0') st.pop(); // For Preceding Zeroes
        }
        while( k>0 && !st.empty() ){
            st.pop();
            k--;
        }

        if(st.empty()) return "0";

        string str="";
        while(!st.empty()){
            str.push_back(st.top());
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
        
    }
};

// Q: https://leetcode.com/problems/remove-k-digits/?envType=daily-question&envId=2024-04-11
// A: https://leetcode.com/problems/remove-k-digits/solutions/1779458/c-easy-to-understand-stack-short-simple