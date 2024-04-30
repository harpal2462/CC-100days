// 1915. D42_H_POTD_Number_of_Wonderful_Substrings

#define ll long long int
class Solution {
public:
    long long wonderfulSubstrings(string word) {
        ll ans=0; ll prefix=0; unordered_map<ll,ll>m;
        m[0]=1;
        for(auto ch:word){
            prefix^= 1<< (ch-'a');
            ans+=m[prefix];
            for(int i=0;i<10;i++){
                ll oddPatern= prefix^(1<<i);
                ans+=m[oddPatern];
            }
            m[prefix]++;
        }
        return ans;
    }
};

// Q:https://leetcode.com/problems/number-of-wonderful-substrings/?envType=daily-question&envId=2024-04-30

// A:https://www.youtube.com/watch?v=EnBTWY52n_A&t=196s

// Similar Questions:
// https://leetcode.com/problems/number-of-wonderful-substrings/solutions/1299525/count-bitmasks-with-picture