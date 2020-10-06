/*
20. Valid Parentheses - Easy

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.

Example 1:
Input: s = "()"
Output: true

Example 2:
Input: s = "()[]{}"
Output: true

Example 3:
Input: s = "(]"
Output: false

Example 4:
Input: s = "([)]"
Output: false

Example 5:
Input: s = "{[]}"
Output: true

Constraints:
1 <= s.length <= 104
s consists of parentheses only '()[]{}'.

*/

class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        for (auto c : s) {
            if(c == '(' || c == '{' || c == '[')
                st.push(c);
            
            if(st.empty()) return false;
            
            if(c == ')') {
                if (st.top() == '{' || st.top() == '[') 
                    return false;
                else
                    st.pop(); 
            }
            
            if(c == '}') {
                if (st.top() == '(' || st.top() == '[') 
                    return false;  
                else
                    st.pop(); 
            }                    
            
            if(c == ']') {
                if (st.top() == '{' || st.top() == '(') 
                    return false;
                else
                    st.pop(); 
            }                 
        }
        
        if(!st.empty()) return false;
        return true;
    }
};
