#ifndef SINGLELIST_H_INCLUDED
#define SINGLELIST_H_INCLUDED


#include <iostream>

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

using namespace std;


typedef int infotype;
typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
};

struct List {
    address first;
};


/** DIBERIKAN **/
address allocate(infotype x);
void deallocate(address &P);
void createList(List &L);
void printInfo(List L);
void reverseList(List &L);

/** DIKERJAKAN **/
void insertFirst(List &L, address P);
void insertLast(List &L, address P);
void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);


#endif // SINGLELIST_H_INCLUDED
