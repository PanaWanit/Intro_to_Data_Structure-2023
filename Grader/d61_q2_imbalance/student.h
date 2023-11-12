// Your code here


int les_go(node* n, int level, int& mx, KeyT& ans) {
    if(n==NULL) return level;
    int l = les_go(n->left, level+1, mx, ans), r = les_go(n->right, level+1, mx, ans);
    int bal_fac = abs(l-r);
    if(mx < bal_fac)
        mx = bal_fac, ans = n->data.first;
    if(mx == bal_fac)
        if(mLess(n->data.first, ans)) ans = n->data.first;
    return l > r ? l : r;
}

KeyT getValueOfMostImbalanceNode() {
    KeyT ans;
    int mx=-1;
    les_go(mRoot, 0, mx, ans);
    return ans;
}
