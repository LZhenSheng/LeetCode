class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='('||s[i]=='['||s[i]=='{')
                stk.push(s[i]);
            else if(!stk.empty())
            {
                if(s[i]==']')
                {
                    if(stk.top()=='[')
                        stk.pop();
                    else 
                        return false;
                }
                else if(s[i]=='}')
                {
                    if(stk.top()=='{')
                        stk.pop();
                    else
                        return false;
                }
                else if(s[i]==')')
                {
                    if(stk.top()=='(')
                        stk.pop();
                    else
                        return false;
                }
            }
            else
                return false;
        }
        if(stk.empty())
            return true;
        else
            return false;
    }
};
