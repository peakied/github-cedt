void shift(int k) {
	// TODO: Add your code here
  while(k < 0) {
    k += mSize;
  }
  k %= mSize;
  node* first = mHeader->next;
  mHeader->next->prev = mHeader->prev;
  mHeader->prev->next = mHeader->next;
  while(k--){
    first = first->next;
  }
  first->prev->next = mHeader;
  mHeader->prev = first->prev;
  first->prev = mHeader;
  mHeader->next = first;
}
