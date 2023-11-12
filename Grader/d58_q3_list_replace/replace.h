void replace(const T& x, list<T>& y) {
  for(iterator it = begin(), nx; it != end(); it=nx) {
    nx = it.ptr -> next;
    if(*it != x) continue;
    it = erase(it);
    for(auto i = y.begin(); i != y.end(); i++)
      insert(it, *i);
  }
}
