// 1894. D109_M_Find_the_Student_that_Will_Replace_the_Chalk
class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int numberOfStudents = chalk.size();
        long long int sumOfChalks = 0;
        for (auto ithChalk : chalk) sumOfChalks += ithChalk;
        k = k % sumOfChalks;
        int indexOfStudent = 0;
        while (k >= chalk[indexOfStudent % numberOfStudents]) {
            k = k - chalk[indexOfStudent % numberOfStudents];
            indexOfStudent++;
        }
        return indexOfStudent % numberOfStudents;
    }
};

// Q:https://leetcode.com/problems/find-the-student-that-will-replace-the-chalk/