void shift(int k) {
	k = (k%(int)mSize + (int)mSize) % (int)mSize;
	if(k==0) return;
	auto it = begin();
	for(int i=0; i<k; i++, it++);


	mHeader->prev->next = mHeader->next;
	mHeader->next->prev = mHeader->prev;

	mHeader->next = it.ptr;
	mHeader->prev = it.ptr->prev;

	it.ptr->prev->next = mHeader;
	it.ptr->prev = mHeader;

}
