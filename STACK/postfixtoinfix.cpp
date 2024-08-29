#include<iostream>
#include<stack>
using namespace std;

string postfixtoinfix(string s)
{
    int i = 0;
    stack<string> st;
    while (i < s.length())
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
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
        i++;
    }

    return st.top(); // The final result will be the only element left in the stack
}

int main()
{
    string s="ab+cde+**";
    cout<<postfixtoinfix(s);
}
