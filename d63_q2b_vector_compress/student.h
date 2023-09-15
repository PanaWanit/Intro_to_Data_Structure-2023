#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::compress() {
    T* t = new T[mSize]();
    for(int i=0; i<mSize; i++)
        t[i] = mData[i];
    delete [] mData;
    mData = t;
    mCap = mSize;
}

#endif
