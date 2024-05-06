// 556. D48_M_Next_Greater_Element_III
class Solution {
public:
    int nextGreaterElement(int n) {
        string s= to_string(n);
        int sz=s.size();
        int i=sz-2;
        
        while(i>=0 && s[i]>=s[i+1]) i--;
        if(i<0) return-1;

        int j=sz-1;
        while(s[i]>=s[j]) j--;

        swap(s[i],s[j]);
        sort(s.begin()+i+1,s.end());
        
        long modi= stol(s);                     // correct:stol not stoi
        if(modi>INT_MAX ) return-1;
        return modi;
    }
};

// Q:https://leetcode.com/problems/next-greater-element-iii/
// A:https://leetcode.com/problems/next-greater-element-iii/solutions/3951464/most-comprehensive-solution-line-by-line-easy-to-understand-simple-easiest-c