#ifndef DOUBLELINIER_H_INCLUDED
#define DOUBLELINIER_H_INCLUDED

#include <iostream>

#define Nil NULL
#define first(L) L.first
#define last(L) L.last
#define ID(P) P->ID
#define name(P) P->name
#define IPK(P) P->IPK
#define next(P) P->next
#define prev(P) P->prev

using namespace std;

typedef struct Student *address;

struct Student {
    string ID,name;
    double IPK;
    address next,prev;
};

struct List {
    address first,last;
};

bool isEmpty(List L);
address newElement(string newID, string newName, double newIPK);
void addStudent (List &L,string newID, string newName, double newIPK);
void inputStudent(List &L);
void outputStudentData (List L);
address searchStudent (List L, string xID);
void deleteP (List &L, address P);
void deleteStudent (List &L, string xID, address &P);

#endif // DOUBLELINIER_H_INCLUDED
