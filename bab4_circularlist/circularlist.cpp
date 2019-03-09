#include "circularlist.h"

void insertFirst(List &L, address P) {

    if(first(L) == NULL && last(L) == NULL) {
        first(L) = P;
        last(L) = P;
        next(last(L)) = first(L);
        prev(last(L)) = last(L);
    } else {
        next(P) = first(L);
        prev(last(L)) = P;
        first(L) = P;
        next(last(L)) = first(L);
        prev(first(L)) = last(L);
    }

}


void printInfo(List L) {

    if(first(L)!=NULL &&last(L)!=NULL) {
        address P = first(L);
        while(P!=last(L)) {
            cout<<info(P)<<", ";
            P = next(P);
        }
        cout<<info(P)<<", ";
    }
    cout<<endl;
}


void insertLast(List &L, address P) {

    if((first(L) == NULL) && (last(L) == NULL)) {
        if(first(L) == NULL && last(L) == NULL) {
            first(L) = P;
            last(L) = P;
            next(last(L)) = first(L);
            prev(last(L)) = last(L);
    }   else {
            next(P) = first(L);
            prev(last(L)) = P;
            first(L) = P;
            next(last(L)) = first(L);
            prev(first(L)) = last(L);
        }
    } else {
        next(last(L)) = P;
        next(P) = first(L);
        prev(P) = last(L);
        prev(first(L)) = P;
        last(L) = P;
    }

}

void deleteFirst(List &L, address &P) {

    if(first(L) == NULL && first(L) == NULL){
    }
    else if(first(L) == last(L)){
        P = first(L);
        next(last(L)) = NULL;
        prev(first(L)) = NULL;
        first(L) = NULL;
        last(L) = NULL;
    }
    else{
        P = first(L);
        first(L) = next(P);
        prev(first(L)) = last(L);
        next(last(L)) = first(L);
        next(P) = NULL;
        prev(P) = NULL;
    }

}

void deleteLast(List &L, address &P) {

    if(first(L) == last(L)){
        deleteFirst(L,P);
    } else {
        P = last(L);
        last(L) = prev(P);
        next(last(L)) = first(L);
        prev(first(L)) = last(L);
        next(P) = NULL;
        prev(P) = NULL;
    }

}

void deleteAfter(List &L, address Prec, address &P) {

    if(Prec == last(L)){
        deleteFirst(L,P);
    }else if(Prec==prev(last(L))){
        deleteFirst(L,P);
    } else {
        P = next(Prec);
        next(Prec) = next(P);
        prev(next(P)) = Prec;
        next(P) = NULL;
        prev(P) = NULL;
    }

}

void createList(List &L) {
    first(L) = NULL;
    last(L) = NULL;
}

address allocate(infotype x) {
    address P;
    P = new elmlist;
    info(P) = x;
    next(P) = NULL;
    return P;
}

void deallocate(address &P) {
    delete P;
    P = NULL;
}

address findElm(List L, infotype x) {
    return NULL;
}

void insertAfter(List &L, address Prec, address P) {
}

