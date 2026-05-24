class Solution {
public:
    int romanValue(char c) {
    switch (c) { // has no extra memory
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
        // std::unordered_map<char,int> map = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int num=0;
        int prevValue=0;
        
        // Traverse backwards
        for (int i = s.size() - 1; i >= 0; i--) {
            int currValue = romanValue(s[i]); // EXACTLY 1 lookup per character
            
            if (currValue < prevValue) {
                num -= currValue;
            } else {
                num += currValue;
            }
            
            prevValue = currValue;
        }
        return num;
    }
};