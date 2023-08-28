#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>

using namespace std;

int eval_postfix(vector<pair<int,int> > v) {
  stack<int> st;
  for(auto& [a,b] : v) {
    if(a==1) {
      st.push(b);
    }
    else {
      int k1 = st.top(); st.pop();
      int k2 = st.top(); st.pop();
      if(b == 0) st.push(k2+k1);
      else if(b==1) st.push(k2-k1);
      else if(b==2) st.push(k2*k1);
      else st.push(k2/k1);
    }
  }
  return st.top();
}

#endif
