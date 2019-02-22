#include "singlelist.h"

/** DIBERIKAN **/
address allocate(infotype x){
    /** Fungsi ini akan membuat
        elemen baru, mengalokasikan
        memory untuk elemen tersebut,
        dan mengembalikan pointer p
        yang menunjuk elemen baru*/

    address p = new elmlist;
    info(p) = x;
    next(p) = NULL;

    return p;
}
void deallocate(address &P){
    /** Prosedur ini akan menghapus
        elemen yang ditunjuk oleh
        pointer P*/

    delete P;
    P = NULL;
}
void createList(List &L){
    /** Prosedur ini akan menginisialisasi
        list L*/

    first(L) = NULL;
}
void printInfo(List L){
    /** prosedur ini akan mengoutputkan
        info dari masing-masing elemen
        di list L*/

    address p = first(L);
    while (p != NULL){
        cout << info(p) << ", ";
        p = next(p);
    }
    cout << endl;
}
void reverseList(List &L){
    /** Prosedur ini akan membalikkan isi
        dari list L*/

    List new_L;
    createList(new_L);

    while (first(L) != NULL) {
        address p;
        deleteFirst(L, p);
        insertFirst(new_L, p);
    }

    L = new_L;
}

/** DIKERJAKAN **/
void insertFirst(List &L, address P){
    /** TODO: Masukkan elemen yang ditunjuk
              oleh pointer P ke dalam bagian
              pertama list L*/
    next(P) = first(L);
    first(L) = P;


}
void insertLast(List &L, address P){
    /** TODO: Masukkan elemen yang ditunjuk
              oleh pointer P ke dalam bagian
              terakhir list L*/
    address Q;
    Q = first(L);
    if(first(L) == NULL){
        first(L) = P;
    }

    else {
        while(next(Q) != NULL){
            Q = next(Q);
        }
        next(Q) = P;
    }

}
void deleteFirst(List &L, address &P){
    /** TODO: Hapus elemen pertama list L
              dan masukkan elemen yang dihapus
              ke dalam pointer P*/

    P = first(L);
    first(L) = next(first(L));
    next(P) = NULL;

}
void deleteLast(List &L, address &P){
    /** TODO: Hapus elemen terakhir list L
              dan masukkan elemen yang dihapus
              ke dalam pointer P*/

    if(first(L)=NULL) {
        cout<<"List Kosong / Tidak Ada" << endl;
    }
    else {
        address(Q) = first(L);
        while(next(next(Q)) != NULL){
            Q = next(Q);
        }
        P = next(Q);
        next(Q) = NULL;
    }

}
