#include "singlelist.h"

address allocate(infotype x){

    address p = new elmlist;
    info(p) = x;
    next(p) = NULL;

    return p;
}
void deallocate(address &P){

    delete P;
    P = NULL;
}
void createList(List &L){

    first(L) = NULL;
}
void printInfo(List L){

    address p = first(L);
    while (p != NULL){
        cout << info(p) << ", ";
        p = next(p);
    }
    cout << endl;
}
void reverseList(List &L){

    List new_L;
    createList(new_L);

    while (first(L) != NULL) {
        address p;
        deleteFirst(L, p);
        insertFirst(new_L, p);
    }

    L = new_L;
}

void insertFirst(List &L, address P){
    next(P) = first(L);
    first(L) = P;
}
void insertLast(List &L, address P){
    address po = first(L);
    if (po != NULL){
        while (next(po) != NULL){
            po = next(po);
        }
        next(po) = P;
    } else {
        insertFirst(L, P);
    }
}
void deleteFirst(List &L, address &P){
    if (first(L) != NULL){
        P = first(L);
        first(L) = next(P);

        next(P) = NULL;
    }
}
void deleteLast(List &L, address &P){
    if (first(L) != NULL){
        if (next(first(L)) == NULL){
            deleteFirst(L, P);
        } else {
            address po = first(L);
            while (next(next(po)) != NULL){
                po = next(po);
            }

            P = next(po);
            next(po) = NULL;
        }
    }
}
