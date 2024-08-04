//just the code:(without int main)
#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class solution{
    public:
    vector<int> preinposttraversal(TreeNode* root)\
    {
        vector<int> pre,in,post;
        stack<pair<TreeNode*,int>>st;
        st.push({root,1});
        if(root==NULL) return;
        
        while(!st.empty())
        {
            auto it=st.top();
            st.pop();

            //this is part of pre
            //increment 1 to 2 
            //push the left side of the tree

        if(it.second==1)
        {
            pre.push_back(it.first->val);
            it.second++;
            st.push(it);

            if(it.first->left) st.push({it.first->left,1});

        }

        //this is part of in
        //increment from 2 to 3
        //push right

        else if(it.second==2)
        {
            in.push_back(it.first->val);
            it.second++;
            st.push(it);

            if(it.first->right) st.push({it.first->right,1});

        }

        //dont push it back again
        else{
            post.push_back(it.first->val);
        }
        }
    }
};

int main()
{
    return 0;
}