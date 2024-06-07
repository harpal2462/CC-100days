    // 648. D80_M_POTD_Replace_Words
    class Solution {
    public:
        string replaceWords(vector<string>& dict, string s) {
            vector<string> sen;
            int i=0;
            for(int j=0;j<s.size();j++){            // Converting string to vector<string>
                if(s[j]==' '){
                    sen.push_back(s.substr(i,j-i));   
                    i=j+1;
                }
            }
            sen.push_back(s.substr(i));
            for(int i=0;i<sen.size();i++){          // Logic for Prefix Matching
                string temp=sen[i];
                for(auto d: dict){
                    int len= d.size();
                    if(temp.substr(0,len)==d) temp=d;
                }
                sen[i]=temp;
            }
            string ans="";                   // Converting vector<string> back to String
            for(int i=0;i<sen.size()-1;i++){
                ans+=sen[i]+' ';
            }
            ans+=sen[sen.size()-1];
            return ans;
        }
    };

    // Q;https://leetcode.com/problems/replace-words/?envType=daily-question&envId=2024-06-07