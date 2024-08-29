#include<iostream>
#include<stack>
using namespace std;
class Node {
public:
    int val;  // Value stored in the node
    Node* next;  // Pointer to the next node in the list
    // Constructor to create a new node with a value
    Node(int x) : val(x), next(nullptr) {}
};

class stacksusingarray{
    public:
    int top = -1;
    int st[10];

    void push(int x)
    {
        if(top >= 9) return; // Check if the stack is full (index starts from 0)
        top++;
        st[top] = x;
    }

    int pop()
    {
        if(top == -1) return -1; // Check if the stack is empty
        int ans = st[top];
        top--;
        return ans;
    }

    int size()
    {
        return top + 1;
    }

    int peek() // Rename this function to avoid conflict with the 'top' variable
    {
        if(top == -1) return -1; // Check if the stack is empty
        return st[top];
    }
};

class stackusingll{
    public:
     Node* top;
     int sizey=0;

     stackusingll() : top(nullptr), sizey(0) {}

     void push(int x)
     {
        Node* temp=new Node(x);
        temp->next=top;
        top=temp;
        sizey++;
     }

     void pop()
     {
        if(top==NULL) return;
        Node* temp=top;
        cout<<temp->val<<endl;
        top=top->next;
        delete temp;
        sizey--;
        
     }

     int peek()
     {
        if(top==NULL) return -1;
        return top->val;
     }

     int sizes()
     {
        return sizey;
     }

};

int main()
{
    stackusingll s;
    s.push(5); // push returns void, so no need to print
    s.push(7);
    s.pop();
    cout << s.peek() << endl;
    cout << s.sizes() << endl;
    return 0;
}
