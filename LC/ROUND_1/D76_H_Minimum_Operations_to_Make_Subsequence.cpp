// 1713. D76_H_Minimum_Operations_to_Make_Subsequence
class Solution {
public:
    int lis(vector<int> newarr){      // Longest Increasing Subsequence
        vector<int>lis;
        for(int num:newarr){
            auto it=lower_bound(lis.begin(),lis.end(),num);
            if(it==lis.end()) lis.push_back(num);
            else (*it)=num;
        }
        return lis.size();
    }

    int minOperations(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int>m;
        for(int i=0;i<target.size();i++) m[target[i]]=i;
        vector<int>newarr;
        for(int num:arr){
            if(m.find(num)!=m.end()) newarr.push_back(m[num]);
        }
        return target.size()-lis(newarr);             // Dont newarr.size()-lis(newarr)XXXX
    }
};

// Q:https://leetcode.com/problems/minimum-operations-to-make-a-subsequence/