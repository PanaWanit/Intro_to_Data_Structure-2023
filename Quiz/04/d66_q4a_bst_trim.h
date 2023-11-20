#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "map_bst.h"

int tree_cnt  = 0;
template <typename KeyT,
          typename MappedT,
          typename CompareT>
void CP::map_bst<KeyT,MappedT,CompareT>::my_recur(node* n,int level,int tmp) {
	if(n == NULL) return ;
	my_recur(n->left, level, tmp+1);
	my_recur(n->right, level, tmp+1);
	if(tmp <= level) tree_cnt++;
	if(tmp == level) {
		n->left = NULL;
		n->right = NULL;
		return;
	}
	if(tmp > level) {
		if(mRoot==n) {
			delete n;
			mRoot = NULL;
		}
		else delete n;
	}
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
void CP::map_bst<KeyT,MappedT,CompareT>::trim(int depth) {
	/*write your code here
    If you cry on seeing the question, it is an insult. 
    If your teacher cries upon seeing your answer submission, 
    it is your achievement.

    Good luck with final and see you in Algorithm Design.
    */
	tree_cnt=0;
	my_recur(mRoot, depth, 0);
	mSize = tree_cnt;
}

#endif
