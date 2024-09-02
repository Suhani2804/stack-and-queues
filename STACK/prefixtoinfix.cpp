#include<iostream>
#include<stack>
using namespace std;

string prefixtoinfix(string s)
{
    int i = s.length()-1;
    stack<string> st;
    while (i >=0)
    {
        if (isalnum(s[i])) {
            st.push(string(1, s[i])); // Convert char to string before pushing
        }
        else {
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();
            string conc = '(' + t2 + s[i] + t1 + ')';
            st.push(conc); // Push the concatenated result back onto the stack
        }
        i--;
    }

    return st.top(); // The final result will be the only element left in the stack
}

int main()
{
    string s="*+abc";
    cout<<prefixtoinfix(s);
}
