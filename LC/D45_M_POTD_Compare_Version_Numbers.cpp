// 165. D45_M_POTD_Compare_Version_Numbers
class Solution {
public:
    int compareVersion(string v1, string v2) {
        int i=0,j=0,n1,n2;
        while(i<v1.size() || j<v2.size()){
            n1=0,n2=0;
            while(i<v1.size() && v1[i]!='.'){
                n1=n1*10+(v1[i]-'0');
                i++;
            }
            i++;                                 //skip '.'
            while(j<v2.size() && v2[j]!='.'){
                n2=n2*10+(v2[j]-'0');
                j++;
            }  
            j++;                                 //skip '.'
            if(n1<n2) return -1;
            if(n1>n2) return 1;
        }
        return 0;
    }
};

// Q:https://leetcode.com/problems/compare-version-numbers/description/?envType=daily-question&envId=2024-05-03