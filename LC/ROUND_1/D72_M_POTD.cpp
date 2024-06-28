// 1442. Count Triplets That Can Form Two Arrays of Equal XOR

class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int ans=0;
        for(int i=0;i<arr.size();i++){
            int temp=arr[i];
            for(int j=i+1;j<arr.size();j++){
                temp^=arr[j];
                if(temp==0) ans+=j-i;
            }
        }
        return ans;
    }
};


// Q:https://leetcode.com/problems/count-triplets-that-can-form-two-arrays-of-equal-xor/description/
// A:https://leetcode.com/problems/count-triplets-that-can-form-two-arrays-of-equal-xor/solutions/5230002/100-beats-champion-s-explanation-cute-formatted-with-examples-3-languages