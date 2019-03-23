#include"tree.h"


tree alokasinode(int id){
    tree a;
    a = new node;
    left(a) = NULL;
    right(a) = NULL;
    id(a) = id;
    return a;
}

int nVertex(tree T){
    if(T==NULL){
        return 0;
    }
    else{
        return 1 + nVertex(left(T)) + nVertex(right(T));
    }
}


int nLeaves(tree T){
    if(T==NULL){
        return 0;
    }
    else if(left(T)==NULL && right(T)==NULL){
        return 1;
    }
    else{
        return nLeaves(left(T)) + nLeaves(right(T));
    }
}


adrnode depthFirstSearch(tree T, int X){
    if(T == NULL){
        return NULL;
    }
    else{
        if(id(T) == X){
            return T;
        }
        else{
            adrnode L = depthFirstSearch(left(T),X);
            adrnode R = depthFirstSearch(right(T),X);
            if(L != NULL){
                return L;
            }
            else if(R != NULL){
                return R;
            }
            else{
                return NULL;
            }
        }
    }
}

int height(tree T){
    if (T != NULL){
        int l;
        int r;
        l = 1 + height(left(T));
        r = 1 + height(right(T));
        if (l>r){
            return l;
        }else{
            return r;
        }
    }
}

bool balanced(tree T){
    if (T != NULL){
        int l = height(left(T));
        int r = height(right(T));
        if(abs(l-r)<=1){
            return 1;
        }
        return 0;
    }
}
