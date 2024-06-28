// 752. D34_M_POTD_Open_the_Lock(Shortest PATH + BFS Graph)
class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string>vis{deadends.begin(),deadends.end()};
        if(vis.count("0000")) return -1;
        if(target=="0000") return 0;
        int ans=0;
        queue<string> q{{"0000"}};

        while(!q.empty()){
            ans++;
            for(int sz = q.size(); sz > 0; --sz){
                string word=q.front();
                q.pop();
                for(int i=0;i<4;i++){
                    const char temp= word[i];
                    word[i]= word[i]=='9'? '0' : word[i]+1;      // INCREASE by 1
                    if(word==target) return ans;
                    if(!vis.count(word)){
                        q.push(word);
                        vis.insert(word);
                    }

                    word[i]=temp;
                    word[i]=word[i]=='0' ? '9' : word[i]-1;         // DECREASE by 1
                    if(word==target) return ans;
                    if(!vis.count(word)){
                        q.push(word);
                        vis.insert(word);
                    }

                    word[i]=temp;
                }
            
            }

        }
        return -1;
    }
};

// Q:https://leetcode.com/problems/open-the-lock/?envType=daily-question&envId=2024-04-22
// A:https://leetcode.com/problems/open-the-lock/solutions/5056857/c-o-10-4-time-and-space-apr-22-2024-daily