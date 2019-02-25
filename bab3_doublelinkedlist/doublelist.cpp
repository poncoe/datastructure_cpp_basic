#include "doublelist.h"


/** GIVEN **/
void createList(List &L) {
    /** Prosedur ini akan menginisialisasi
        list L*/

    first(L) = NULL;
    last(L) = NULL;
}

address allocate(infotype x) {
    /** Fungsi ini akan membuat
        elemen baru, mengalokasikan
        memory untuk elemen tersebut,
        dan mengembalikan pointer p
        yang menunjuk elemen baru*/

    address P;
    P = new elmlist;
    info(P) = x;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}

void deallocate(address &P) {
    /** Prosedur ini akan menghapus
        elemen yang ditunjuk oleh
        pointer P*/

    delete P;
    P = NULL;
}

void printInfo(List L) {
    /** prosedur ini akan mengoutputkan
        info dari masing-masing elemen
        di list L*/

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
    /** Prosedur ini akan masukkan
        elemen yang ditunjuk oleh
        pointer P ke dalam bagian
        terakhir list L*/

    if(first(L)!=NULL && last(L)!=NULL) {
        prev(P) = last(L);
        next(last(L)) = P;
        last(L) = P;
    } else {
        first(L) = P;
        last(L) = P;
    }
}


/** NOT GIVEN **/
void deleteFirst(List &L, address &P) {
    /** TODO: Hapus elemen pertama list L
              dan masukkan elemen yang dihapus
              ke dalam pointer P*/

    if (first(L)==NULL && last(L)==NULL){
        if (first(L) != NULL && last(L) != NULL)
            if (first(L)!=last(L)){
                P = first(L);
                first(L) = next(P);
                next(P) = NULL;
                prev(first(L)) = NULL;
        }
        else {
            P = first(L);
            first(L) = NULL;
            last(L) = NULL;
        }
    }
}




void insertFirst(List &L, address P) {
    /** TODO: Masukkan elemen yang ditunjuk
              oleh pointer P ke dalam bagian
              awal list L*/
    if(first(L)==NULL && last(L)==NULL){
        first(L) = P;
        last(L) = P;
    }
    else {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
}

address findElement(List L, infotype x) {
    /** TODO: cari info dari list L yang
              nilainya sama dengan x, assign
              dan return elemen yang ditemukan
              ke pointer baru*/
    address P;
    info(P) = NULL;
    P = first(L);
    while (next(P) != NULL){
        if (info(P) == x){
            return P;
        }
        else{
            P = next(P);
        }

    }
    if (info(P)==x){
        return P;
    }
    else{
        return NULL;
    }
}

void insertAfter(List &L, address Prec, address P) {
    /** TODO: Masukkan elemen yang ditunjuk
              oleh pointer P ke dalam list L
              setelah pointer prec*/
    if (Prec != NULL){
        if(Prec == last(L)){
            next(Prec) = P;
            prev(P) = Prec;
            last(L) = P;
    }
    else {
        next(P) = next(Prec);
        prev(P) = Prec;
        next(Prec) = P;
        prev(next(Prec)) = P;
    }
    }
}

void deleteLast(List &L, address &P) {
    /** TODO: Hapus elemen terakhir list L
              dan masukkan elemen yang dihapus
              ke dalam pointer P*/
    if (first(L)!= NULL && last(L)!= NULL) {
        if (first(L) == last(L)){
            P = first(L);
            P = last(L);
            first(L) = NULL;
            last(L) = NULL;
        } else{
            P = last(L);
            last(L) = prev(last(L));
            prev(P) = NULL;
            next(last(L)) = NULL;
        }
    }
}

void deleteAfter(List &L, address Prec, address &P) {
    /** TODO: Hapus elemen setelah elemen yang
              ditunjuk pointer prec dan masukkan
              elemen yang dihapus ke dalam pointer P*/
    if(Prec != NULL){
        if(next(Prec)==NULL){
            P = NULL;
        }
    else if (next(Prec) == last(L)){
        P = next(Prec);
        next(Prec) = next(P);
        prev(next(P) = Prec);
        next(P) = NULL;
        prev(P) = NULL;
        }
    }
}
