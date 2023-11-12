#ifndef __STUDENT_H__
#define __STUDENT_H__



template <typename T>
bool CP::list<T>::check() {
  auto nx = mHeader, pv = mHeader;
  #include<vector>
  std::vector<iterator> path, path_rev;

  for(int i=0; i<=(int)mSize; i++, nx=nx->next, pv=pv->prev) {
    if(nx->next == NULL) return false;
    if(pv->prev == NULL) return false;
    path.push_back(nx);
    path_rev.push_back(pv);
  }
  if(nx != mHeader || pv != mHeader) return false;

  for(int i=1; i<path.size(); i++)
    if(path[i] != path_rev[path.size()-i]) return false;

  return true;
}


#endif
