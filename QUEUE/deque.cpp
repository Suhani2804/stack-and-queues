//it is a combination of tsack and linked list
//can push in front and in back
//pop can be done from front and back

#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int>dq;
    dq.push_back(1);
    dq.push_front(2);
    dq.push_back(3);
    dq.push_front(4);

    for(auto i:dq){
        cout<<i<<" ";
    }
    cout<<endl;

    dq.pop_back();
    dq.pop_front();

    for(auto i:dq){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<dq.size();
    return 0;

}