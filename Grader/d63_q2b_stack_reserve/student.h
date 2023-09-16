#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
int CP::stack<T>::compare_reserve(const CP::stack<T> &other) const {
    int res = (mCap - mSize) - (other.mCap - other.mSize);
    return (res > 0) - (res < 0);
}

#endif
