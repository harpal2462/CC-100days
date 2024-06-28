// 786. D52_M_POTD_Kth_Smallest_Prime_Fraction     
class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue< pair<double,pair<int,int>> >maxHeap;
        int n=arr.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                maxHeap.push( { (double)arr[i]/arr[j],{arr[i],arr[j]} } );
                if(maxHeap.size()>k){
                    maxHeap.pop();
                }
            }
        }
        auto ans= maxHeap.top().second;
        return {ans.first,ans.second};
    }
};

// Q:https://leetcode.com/problems/k-th-smallest-prime-fraction/?envType=daily-question&envId=2024-05-10

// A:https://leetcode.com/problems/k-th-smallest-prime-fraction/solutions/5137467/fastest-100-easy-clean-concise-multiple-approaches