auto speedup = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    return 0;
}();


class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stack;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                stack.push(s[i]);
            }else{
                if(!stack.empty()){
                    char topChar = stack.top();
                    if ((s[i] == ')' && topChar != '(') || (s[i] == '}' && topChar != '{') || (s[i] == ']' && topChar != '[')) {
                        return false;
                    }else{
                            stack.pop();
                        }
                }else{
                    return 0;
                }
            }
        }
        return stack.empty();
    }
};