class Solution {
public:
    int firstUniqChar(string s) {
        int req_index;
        int flag = 0;
        for(int i=0;i<s.size();i++){
            for(int j=0;j<s.size();j++){
                if(s[i]==s[j] && i!=j){
                    flag = 1;
                    break;
                }
            }
            if(!flag){
                return i;
            }else{
                flag = 0;
            }
        }
        return -1;
    }
};