struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {
    }

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {
    }

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {
    }
};

class Solution {
public:
    TreeNode *recoverFromPreorder(string traversal) {
        stack<TreeNode *> st;
        int index = 0;
        int n = traversal.size();

        while (index < n) {
            int deepth = 0;
            while (index < n && traversal[index] == '-') {
                index++;
                deepth++;
            }

            int value = 0;
            while (index < n && isdigit(traversal[index]) {
                value = value * 10 + traversal[index] - '0';
                index++;
            }
            TreeNode *node = new TreeNode(value);

            if (deepth == 0) {
                st.push(node);
                continue;
            }

            while (st.size() > deepth) {
                st.pop();
            }
            TreeNode *parent = st.top();
            if (parent->left == nullptr) {
                parent->left = node;
            } else {
                parent->right = node;
            }
            st.push(node);
        }
        while (st.size() > 1) {
            st.pop();
        }
        return st.top();
    }
};

