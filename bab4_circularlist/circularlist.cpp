#include "circularlist.h"

void insertFirst(List &L, address P) {
    if (first(L)==NULL){
        first(L)=P;
        last(L)=P;
        prev(P)=P;
        next(P)=P;
    }
    else{
        next(P)=first(L);
        prev(first(L))=P;
        first(L)=P;
        prev(first(L))=last(L);
        next(last(L))=first(L);
    }
}


void printInfo(List L) {
    address P=first(L);
    if (P!=NULL){
        while (next(P)!=first(L)){
            cout<<info(P)<<", ";
            P=next(P);
        }
        cout<<info(P)<<", ";

    }cout<<endl;
}


void insertLast(List &L, address P) {
    if(first(L)==NULL){
        insertFirst(L,P);
    }
    else{
        next(last(L))=P;
        prev(P)=last(L);
        last(L)=P;
        next(P)=first(L);
        prev(first(L))=last(L);
    }
}

void deleteFirst(List &L, address &P) {
    if (first(L)!=NULL){
        P=first(L);
        if (next(P)==first(L)){
            next(P)=NULL;
            prev(P)=NULL;
            first(L)=NULL;
            last(L)=NULL;
        }
        else{
            first(L)=next(P);
            next(P)=NULL;
            prev(first(L))=NULL;
            next(last(L))=first(L);
            prev(first(L))=last(L);
        }
    }
}

void deleteLast(List &L, address &P) {
    if (first(L)!=NULL){
        P=last(L);
        if (prev(P)==last(L)){
            next(P)=NULL;
            prev(P)=NULL;
            first(L)=NULL;
            last(L)=NULL;
        }
        else{
            last(L)=prev(P);
            prev(P)=NULL;
            next(last(L))=NULL;
            prev(first(L))=last(L);
            next(last(L))=first(L);
        }
    }
}

void deleteAfter(List &L, address Prec, address &P) {
    if(Prec!=NULL){
        if (next(Prec)==last(L)){
            deleteLast(L,P);
        }
        else if (next(Prec)==first(L)){
            deleteFirst(L,P);
        }
        else{
            P=next(Prec);
            next(Prec)=next(P);
            prev(next(P))=Prec;
            next(P)=NULL;
            prev(P)=NULL;
        }
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

