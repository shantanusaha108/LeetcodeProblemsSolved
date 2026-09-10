#include<iostream>




// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:

    void SumAndCount(int *sum, int *count, TreeNode* root){
        if(root == NULL) return;
        if(root->left != NULL){
            SumAndCount(sum,count,root->left);
        }
        if(root->right != NULL){
            SumAndCount(sum,count,root->right);
        }
        *sum += root->val;
        (*count)++;
    }

    int AvgMatchCount(TreeNode* root, int* ans){
        if(root == NULL) return 0;
        int count = 0;
        int sum  = 0;
        AvgMatchCount(root->left,ans);
        AvgMatchCount(root->right,ans);
        SumAndCount(&sum,&count,root);
        if(sum/count == root->val) (*ans)++;
        return *ans;
    }

    int averageOfSubtree(TreeNode* root) {
        int ans = 0;
        ans = AvgMatchCount(root,&ans);
        return ans;
    }
};

int main(){
    return 0;
}