#ifndef DOUBLELIST_H_INCLUDED
#define DOUBLELIST_H_INCLUDED

#include <iostream>
#define first(L) L.first
#define next(P) P->next
#define last(L) L.last
#define prev(P) P->prev
#define info(P) P->info


using namespace std;

typedef char infotype;
typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
    address prev;
};

struct List {
    address first;
    address last;
};


/** GIVEN **/
void createList(List &);
address allocate(infotype);
void deallocate(address &);
void printInfo(List);
void insertLast(List &L, address P);

/** TODO PRACTICE **/
void insertFirst(List &L, address P);
address findElement(List L, infotype x);
void insertAfter(List &L, address Prec, address P);
void deleteLast(List &L, address &P);
void deleteAfter(List &L, address Prec, address &P);

/** NOT GIVEN **/
void deleteFirst(List &L, address &P);


#endif // DOUBLELIST_H_INCLUDED
