// Your code here

int count_root(node* no, int &max, KeyT &least){
    if(no == NULL) return -1;
    int highleft = count_root(no->left, max, least);
    int highright = count_root(no->right, max, least);
    int imbalance = highleft-highright;
    if(imbalance<0){
        imbalance = -imbalance;
    }
    if(imbalance>max){
        least = no->data.first;
          max = imbalance;
    }else if(imbalance==max){
        if(mLess(no->data.first,least)){
            least = no->data.first;
        }
    }
    if(highleft>highright){
        return 1+highleft;
    }else{
        return 1+highright;
    }
}

KeyT getValueOfMostImbalanceNode() {
    // Your code here]
    int max = 0;
    KeyT least = mRoot->data.first;
    count_root(mRoot, max, least);
    return least;
}