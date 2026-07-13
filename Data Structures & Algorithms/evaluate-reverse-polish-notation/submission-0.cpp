class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(string op:tokens){
            if(op=="+"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                st.push(a+b);
            }
          else if(op=="-"){
           int b = st.top(); st.pop();
    int a = st.top(); st.pop();
    st.push(a - b);
          }
          else if(op=="*"){
        int b = st.top(); st.pop();
        int a = st.top(); st.pop();
        st.push(a * b);
          }
        else if (op == "/") {
        int b = st.top(); st.pop();
        int a = st.top(); st.pop();
        st.push(a / b);
    }
    else {
        st.push(stoi(op));
    }
        }
        return st.top();
    }
};