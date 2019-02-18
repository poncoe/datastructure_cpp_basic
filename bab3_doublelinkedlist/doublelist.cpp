#include "doublelist.h"

void createList(List &L) {

    first(L) = NULL;
    last(L) = NULL;
}

address allocate(infotype x) {

    address P;
    P = new elmlist;
    info(P) = x;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}

void deallocate(address &P) {

    delete P;
    P = NULL;
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

    if(first(L)!=NULL && last(L)!=NULL) {
        prev(P) = last(L);
        next(last(L)) = P;
        last(L) = P;
    } else {
        first(L) = P;
        last(L) = P;
    }
}

void deleteFirst(List &L, address &P) {
    if(first(L)==last(L)){
        P = first(L);
        first(L)=NULL;
        last(L)=NULL;
    }
    else if(next(first(L))==last(L)){
        P= last(L);
        last(L)=first(L);
        next(first(L))=NULL;
        prev(P)=NULL;
    }else{
        P = first(L);
        first(L) = next(P);
        next(P)= NULL;
        prev(first(L)) = NULL;
    }
}


void insertFirst(List &L, address P) {

    if(first(L)!=NULL && last(L)!=NULL) {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    } else {
        first(L) = P;
        last(L) = P;
    }
}

address findElement(List L, infotype x) {
    address P = first(L);
    while ((info(P) != x)&&(next(P) != NULL)){
        P = next(P);
    }
    if (info(P)== x){
        return P;
    }else{
        return NULL;
    }
}

void insertAfter(List &L, address Prec, address P) {
    if(Prec != NULL){
        if(next(Prec)==NULL){
            insertLast(L,P);
        }
        else{
            next(P) = next(Prec);
            prev(next(Prec))= P;
            next(Prec)=P;
            prev(P)=Prec;


        }

    }
}

void deleteLast(List &L, address &P) {
    if(first(L)==last(L)){
        P = first(L);
        first(L)=NULL;
        last(L)=NULL;
    }
    else if(next(first(L))==last(L)){
        P= last(L);
        last(L)=first(L);
        next(first(L))=NULL;
        prev(P)=NULL;
    }
    else if(last(L) != NULL){
        P = last(L);
        last(L) = prev(P);
        next(prev(P))=NULL;
        prev(P)=NULL;

    }
}

void deleteAfter(List &L, address Prec, address &P) {
    if(Prec != NULL){
        if(next(Prec)!=NULL){
            if(next(Prec)==last(L)){
                deleteLast(L,P);
            }
            else{
                P = next(Prec);
                next(Prec)=next(P);
                prev(next(P)) = Prec;
                next(P) = NULL;
                prev(P) = NULL;
            }
        }

    }
}
