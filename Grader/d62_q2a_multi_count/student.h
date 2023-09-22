#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template <typename T>
std::vector<std::pair<T,size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const {
    using namespace std;
    map<T, size_t> mp;
    CP::queue<T> q(*this);
    for(auto& x : k) mp[x] = 0;
    while(!q.empty()) {
        if(mp.count(q.front())) mp[q.front()]++;
        q.pop();
    }
    vector<pair<T, size_t>> v;
    for(auto& x : k) v.push_back({x, mp[x]});
    return v;
}

#endif