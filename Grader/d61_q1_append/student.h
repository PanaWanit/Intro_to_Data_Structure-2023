#include "stack.h"
#include "queue.h"

namespace CP {
	template<typename T>
	void stack<T>::appendStack(stack<T> s) {
		expand(mSize + s.size());
		for(int i=(int)mSize-1; i>=0; i--)
			mData[i+s.size()] = mData[i];
		mSize += s.size();
		int i = s.size();
		while(i--) mData[i] = s.top(), s.pop();
	}

	template<typename T>
	void stack<T>::appendQueue(queue<T> q) {
		int t = q.size();
		while(!q.empty()) push(q.front()), q.pop();
		for(int i=t; i--;) q.push(top()), pop();
		for(int i=(int)mSize-1; i>=0; i--) mData[i+t] = mData[i];
		for(int i=0; i<t; i++) mData[i] = q.front(), q.pop();
		mSize += t;
	}

	template<typename T>
	void queue<T>::appendStack(stack<T> s) {
		expand(s.size() + mSize);
		int t=s.size();
		for(int i=mSize; !s.empty(); i++) mData[i] = s.top(), s.pop();
		mSize += t;
	}

	template<typename T>
	void queue<T>::appendQueue(queue<T> q) {
		expand(q.size() + mSize);
		int t=q.size();
		for(int i=mSize; !q.empty(); i++) mData[i] = q.front(), q.pop();
		mSize += t;
	}
}