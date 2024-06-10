// 1051. D83_E_POTD_Height_Checker
class Solution {
public:
    void countingsort(vector<int>&sorted){   //TC: O(n+k)
        unordered_map<int,int>m;  
        for(auto num:sorted) m[num]++;
        int mn=*min_element(sorted.begin(),sorted.end()); 
        int mx=*max_element(sorted.begin(),sorted.end());
        int i=0;
        for(int val=mn;val<=mx;val++){      //TC: O(k) k=mx-mn  
            while(m[val]>0){
                sorted[i]=val;
                i++;
                m[val]--;
            }
        }
    }
    int heightChecker(vector<int>& heights) {
        vector<int> sorted=heights;
        countingsort(sorted);
        int ans=0;
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=sorted[i]) ans++;
        }
        return ans;
    }
};

// Q: https://leetcode.com/problems/height-checker/description/?envType=daily-question&envId=2024-06-10