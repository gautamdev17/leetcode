class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prev = strs[0];
         for(int i=1;i<strs.size();i++){
            for(int j=0;j<=strs[i].size();j++){
                if(prev[j]!=strs[i][j]){
                    //i want to cut length of prev from that
                    prev.resize(j);
                    break;
                }
            }
         }
         return prev;
    }
};