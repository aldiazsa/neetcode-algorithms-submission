#include <cctype>

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stack;
        if(!tokens.size()){return 0;}

        for(const string& token : tokens){
            if(token == "*"){
                int y = stack.top(); stack.pop();
                int x = stack.top(); stack.pop();
                stack.push(x * y);
            } else if(token == "-"){
                int y = stack.top(); stack.pop();
                int x = stack.top(); stack.pop();
                stack.push(x - y);
            } else if (token == "+"){
                int y = stack.top(); stack.pop();
                int x = stack.top(); stack.pop();
                stack.push(x + y);
            } else if(token == "/"){
                int y = stack.top(); stack.pop();
                int x = stack.top(); stack.pop();
                stack.push(x / y);
            } else{
                stack.push(std::stoi(token));
            }
        }
        return stack.top();
    }
};
