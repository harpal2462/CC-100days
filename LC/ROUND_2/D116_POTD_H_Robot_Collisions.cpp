// 2751. D116_POTD_H_Robot_Collisions
class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& pos, vector<int>& health, string dir) {
        int n = health.size();
        unordered_map<int, int> pos_index;
        for (int i = 0; i < n; i++) pos_index[pos[i]] = i;

        sort(pos.begin(), pos.end());
        stack<int> st;
        for (auto p : pos) {
            int robot = pos_index[p];
            if (!st.empty() && dir[st.top()] == 'R' && dir[robot] == 'L') {
                bool check = false;
                while (!st.empty() && dir[st.top()] == 'R' &&
                       dir[robot] == 'L') {
                    if (health[robot] > health[st.top()]) {
                        check = true;
                        health[robot]--;
                        health[st.top()] = -1;
                        st.pop();
                        continue;
                    } else check = false;

                    if (health[robot] == health[st.top()]) {
                        health[st.top()] = -1;
                        health[robot] = -1;
                        st.pop();
                        break;
                    }
                    if (health[robot] < health[st.top()]) {
                        health[st.top()]--;
                        health[robot] = -1;
                        break;
                    }
                }
                if (check) st.push(robot);
            } else st.push(robot);
        }
        vector<int> inOrderHealth;
        for (auto h : health) {
            if (h != -1) inOrderHealth.push_back(h);
        }
        return inOrderHealth;
    }
};

// Q:https://leetcode.com/problems/robot-collisions/?envType=daily-question&envId=2024-07-13