// 1052. D94_M_POTD_Grumpy_Bookstore_Owner
class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=customers.size();
        int sum=0;
        for(int i=0;i<n;i++) if(grumpy[i]==0) sum+=customers[i];
        int temp=sum;
        int ans=sum;
        int count=1;
        int i=0,j=0;
        while(j<n){
            if(count>minutes){
                count--;
                if(grumpy[i]==1) temp-=customers[i];
                i++;
            }
            if(grumpy[j]==1) temp+=customers[j];
            ans=max(ans,temp);
            count++;
            j++;
        }
        return ans;
    }
};

// Q:https://leetcode.com/problems/grumpy-bookstore-owner/?envType=daily-question&envId=2024-06-21