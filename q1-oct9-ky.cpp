//https://assets.leetcode.com/uploads/2021/03/16/remleaves-tree.jpg

//[[4,5,3],[2],[1]]
#include<bits/stdc++.h>

 
vector<vector<int>> leafNodes(TreeNode* root) {
    unordered_map<TreeNode*, int> depth;
    vector<vector<int>> ans;
    findDepth(root, depth, ans);
    return ans;
}

int findDepth(TreeNode* node, unordered_map<TreeNode*, int> depth, vector<vector<int>> &ans) {
    if(node) {
        depth[node] = 1 + max(findDepth(node->left, depth, ans),findDepth(node->right, depth, ans));
        if(ans.size() < depth[node]) {
            ans.push_back({});
        } 
        ans[depth[node]-1].push_back(node->val);
        return depth[node];
    } else {
        return 0;
    }
}
