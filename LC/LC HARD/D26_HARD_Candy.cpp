// D26 Top Interview 150 
// 135. Candy
class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        if(n==1) return 1;

        vector<int>ans(n);
        ans[0]=1;
        for(int i=1;i<n;i++){
            if(ratings[i]>ratings[i-1]){
                ans[i]=ans[i-1]+1;
            }else{
                ans[i]=1;

                int j=i;
                while(j>=1 && ans[j]==ans[j-1] && ratings[j]!=ratings[j-1]){
                    ans[j-1]++;
                    j--;
                }
            }
        }
        int sum=0;
        for(int i=0;i<ans.size();i++){
            sum+=ans[i];
        }
        return sum;
    }
};




// Q: https://leetcode.com/problems/candy/?envType=study-plan-v2&envId=top-interview-150
// A: https://leetcode.com/problems/candy/solutions/4947286/easily-explained-3-line-explanation