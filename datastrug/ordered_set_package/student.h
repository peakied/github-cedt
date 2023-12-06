#include <vector>
#include <set>
using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v(A);
    set<T> dulp;
    size_t sizeB = B.size();
    for(T a : v) dulp.insert(a);
    for(size_t i = 0; i < sizeB; i++){
        if(dulp.find(B[i]) == dulp.end()){
            dulp.insert(B[i]);
            v.push_back(B[i]);
        }
    }

    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    set<T> dulp;
    size_t sizeA = A.size();
    for(T a : B) dulp.insert(a);
    for(size_t i = 0; i < sizeA; i++){
        if(dulp.find(A[i]) != dulp.end()){
            v.push_back(A[i]);
        }
    }
    return v;
}
