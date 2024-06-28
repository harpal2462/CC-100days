// 1700. Number of Students Unable to Eat Lunch
class Solution {
public:
    int countStudents(vector<int>& stud, vector<int>& sand) {
        vector<int> count(2,0);
        for(int i=0;i<stud.size();i++){
            count[stud[i]]++;
        }
        int rem=sand.size();
        for(int i=0;i<sand.size();i++){
            if(count[sand[i]]==0) break;
            if(rem==0) break;
            count[sand[i]]--;
            rem--;
        }
        return rem;
    }
};


// Q:https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/?envType=daily-question&envId=2024-04-08
// A:https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/solutions/4990164/beats-98-93-extra-easy-solution-with-explanation