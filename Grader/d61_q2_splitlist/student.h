void splitList(list<T>& list1, list<T>& list2) {
    int n = (mSize + 1) >> 1;
    auto m = begin().ptr;

    list1.mSize += n, list2.mSize += mSize-n;
    mSize = 0;

    for(int i=0; i<n; i++, m=m->next);

    // concat *this to list1
    list1.mHeader->prev->next = mHeader->next;
    mHeader->next->prev = list1.mHeader->prev;

    // cut mid
    m->prev->next = list1.mHeader;
    list1.mHeader->prev = m->prev;

    m->prev = list2.mHeader->prev;
    list2.mHeader->prev->next = m;
    
    mHeader->prev->next = list2.mHeader;
    

    mHeader->next = mHeader->prev = mHeader;
}
