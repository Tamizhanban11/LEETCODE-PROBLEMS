class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        if(n%2 != 0){
            return false;
        }
        stack<char>stack;
     for(int i = 0;i<n;i++){
        if(stack.empty()){
            stack.push(s[i]);
        }
     
        else if(s[i] == ')' && stack.top()=='('){
            stack.pop();
        }
        else if(s[i]=='}' && stack.top()=='{'){
            stack.pop();
        }
        else if(s[i]==']' && stack.top() == '['){
            stack.pop();
        }
        else {
            stack.push(s[i]);
        }
     }
        if(stack.empty()){
            return true;
        }
        else {
            return false;
            }
    }
     
        
        
    
};