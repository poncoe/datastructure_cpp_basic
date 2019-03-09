#include "bonus.h"
void separateEvenOdd(List &L1, List &L2, List &L3) {
    address P;
    createList(L2);
    createList(L3);
    while(first(L1)!=NULL) {
        deleteFirst(L1, P);
        if(info(P)%2==0) {
            insertFirst(L2,P);
        } else {
            insertFirst(L3,P);
        }
    }
}

void moveZeros(List &L) {
    address P;
    List L2, L3;
    createList(L2);
    createList(L3);
    while(first(L)!=NULL) {
        deleteFirst(L, P);
        if(info(P)==0) {
            insertFirst(L2,P);
        } else {
            insertFirst(L3,P);
        }
    }
    while(first(L2)!=NULL) {
        deleteFirst(L2, P);
        insertFirst(L,P);
    }
    while(first(L3)!=NULL) {
        deleteFirst(L3, P);
        insertFirst(L,P);
    }
}

void innerAverage(List L) {
    address P = first(L);
    int nmax = info(first(L));
    int nmin = info(first(L));
    int n = 0;
    int tot = 0;
    do {
        if(info(P)>nmax) {
            nmax = info(P);
        }
        if(info(P)<nmin) {
            nmin = info(P);
        }
        tot += info(P);
        n++;
        P = next(P);
    } while(P!=first(L));
    tot -= (nmax+nmin);
    n -= 2;
    cout<<"result = "<<tot/n<<endl;
}


void checkCircular(List L) {
    cout<<"    ...CHECKING CIRCULAR..."<<endl;
    address P = first(L);
    if(P!=NULL)
        while(next(P)!= first(L)) {
            P = next(P);
        }
    cout<<"    circular OK"<<endl;
}
