#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#include<bits/stdc++.h>

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::height() const {
  return mSize?std::__lg(mSize):-1;
}

#endif

