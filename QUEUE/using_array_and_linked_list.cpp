#include<iostream>
#include<queue>
using namespace std;

class Node {
public:
    int val;  // Value stored in the node
    Node* next;  // Pointer to the next node in the list
    // Constructor to create a new node with a value
    Node(int x) : val(x), next(nullptr) {}
};

//using array
class q{
    public:
    int sizes=10;
    int aq[10];
    int start=-1,end=-1;
    int cursize=0;

    void push(int x)
    {
        if(cursize==sizes) return;
        if(cursize==0)
        {
            start=0;end=0;
        }
        else{
            end=(end+1)%sizes;
        }
        aq[end]=x;
        cursize++;
    }

    int pop()
    {
        if(cursize==0) return -1;
        int ele=aq[start];
        if(cursize==1)  start=end=-1;
        else start=(start+1)%sizes;
        cursize-=1;
        return ele;
    }

    int top()
    {
        if(cursize==0) return 0;
        return aq[start];
    }

    int size()
    {
        return cursize;
    }

};

class qusingll{
    public:
    Node* start;Node* end;
    int sizey=0;

    qusingll() : start(nullptr), end(nullptr), sizey(0) {}

     
    void push(int x)
    {
        Node* temp=new Node(x);
        if(start==NULL)
        {
            start=end=temp;
        }
        else{
            end->next=temp;
            end=temp;
        }
        sizey++;
    }

    void pop()
    {
        if(start==NULL) return;
    
    Node* temp;
    temp=start;
    start=start->next;
    delete temp;
    sizey-=1;
    if (start == nullptr) { // If queue becomes empty, reset end pointer
            end = nullptr;
        }
    }

    int top()
    {
        if(start==NULL) return -1;
        return start->val;
    }

     int size() {
        return sizey;
    }
};

int main()
{
    qusingll q1;
    q1.push(5);
    q1.push(8);
    q1.pop();
    cout<< q1.top()<<endl;
     cout<< q1.size();
}