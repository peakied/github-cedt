template <typename T>
void splitList(list<T>& list1, list<T>& list2) {
    // Add your code here
    int num1 = (mSize+1)/2;
    int num2 = mSize-num1;
    if(num1 > 0){
        node* head1 = mHeader->next;
        list1.mHeader->prev->next = head1;
        head1->prev = list1.mHeader->prev;
        for(size_t i = 0; i < num1; i++){
            head1 = head1->next;
        }
        head1->prev->next = list1.mHeader;
        list1.mHeader->prev = head1->prev;
        if(num2 > 0){
            list2.mHeader->prev->next = head1;
            head1->prev = list2.mHeader->prev;
            mHeader->prev->next = list2.mHeader;
            list2.mHeader->prev = mHeader->prev;
        }
    }
    mHeader->next = mHeader;
    mHeader->prev = mHeader;
    list1.mSize += num1;
    list2.mSize += num2;
    mSize = 0;
};
