#include <vector>
#include<algorithm>
using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v(A);
    vector<T> srt(A);
    sort(srt.begin(), srt.end());
    for(auto& x : B)
        if(*lower_bound(srt.begin(), srt.end(), x) != x) v.push_back(x);
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    vector<T> srt(B);
    sort(srt.begin(), srt.end());
    for(auto& x : A)
        if(*lower_bound(srt.begin(), srt.end(), x) == x) v.push_back(x);
    return v;
}
