// infix: operand  operator   operand   : eg: (4*2)+3
// prefix: operator  operand   operand  : eg: + * 4 2 3
//postfix: operand  operand  operator   : 4 2 * 3 +

#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int postfixEvaluation(string s){
    stack<int> st;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0'); //to convert to integer
        }
        else{
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.pop();

            switch(s[i])
            {
                case '+':
                    st.push(op1+op2);
                    break;

                case '-':
                    st.push(op1-op2);
                    break;

                case '*':
                    st.push(op1*op2);
                    break;

                case '/':
                    st.push(op1/op2);
                    break;

                case '^':
                    st.push(pow(op1,op2));
                    break;
            }
        }

    }
    return st.top();
}

int main(){
    cout<<postfixEvaluation("46+2/5*7+")<<endl;
    return 0;
}

//in postfix start from beginning and in prefix we are starting from right