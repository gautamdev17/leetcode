class Solution {
public:
    int romanValue(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default:  return 0;
    }
}
    int romanToInt(string s) {
        int num=0;
        // std::unordered_map<char,int> map = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        for(int i=0;i<s.size();i++){
            if(i!=s.size()-1 && romanValue(s[i])<romanValue(s[i+1])){
                num+=romanValue(s[i+1])-romanValue(s[i]);
                i++;
            }else
                num+=romanValue(s[i]);
        }
        return num;
    }
};