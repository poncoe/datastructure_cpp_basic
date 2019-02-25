#include "bonus.h"
void findBiggest(List L1, List L2) {
    char biggest;
    if(first(L1)!=NULL && first(L2)!=NULL) {
        address P = first(L1);
        address Q = first(L2);
        biggest = '-';
        while(Q!=NULL) {
            P = first(L1);
            while(P!=NULL&&info(P)!=info(Q)) {
                P = next(P);
            }
            if(P!=NULL) {
                if(biggest == '-' || biggest < info(P)) {
                    biggest = info(P);
                }
            }
            Q = next(Q);
        }
        if(biggest=='-') {
            cout<<"Nothing"<<endl;
        } else {
            cout<<biggest<<endl;
        }
    }
}

void insertionSort(List &L1) {
    List L2;
    createList(L2);
    while(first(L1)!=NULL) {
        address P = NULL;
        deleteLast(L1, P);
        if(first(L2)==NULL) {
            insertFirst(L2, P);
        } else if( info(P)<=info(first(L2))) {
            insertFirst(L2, P);
        } else if(info(P)>=info(last(L2))) {
            insertLast(L2, P);
        } else {
            address Q = first(L2);
            while(info(next(Q))<info(P)) {
                Q = next(Q);
            }
            insertAfter(L2, Q, P);
        }
    }
    L1 = L2;
}

void reverseHalf(List &L) {
    address P = first(L);
    int i = 0;
    while(P!=NULL) {
        P = next(P);
        i++;
    }
    i = i/2;
    for(int j=0; j<i; j++) {
        deleteLast(L,P);
        insertFirst(L,P);
    }
}
