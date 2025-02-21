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

class FindElements {
public:
    unordered_set<int> values;

    FindElements(TreeNode *root) {
        recover(root, 0);
    }

    void recover(TreeNode *node, int val) {
        if (!node) return;
        node->val = val;
        values.insert(val);

        if (node->left != nullptr) recover(node->left, 2 * val + 1);
        if (node->right != nullptr) recover(node->right, 2 * val + 2);
    }

    bool find(int target) {
        return values.find(target) != values.end();
    }
};
