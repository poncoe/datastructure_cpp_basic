#ifndef CIRCULAR_H_INCLUDED
#define CIRCULAR_H_INCLUDED
#include <iostream>
#include <string.h>

#define ID(P) (P)->ID
#define name(P) (P)->name
#define IPK(P) (P)->IPK
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) (L).first

using namespace std;

typedef struct student *address;

struct student{
    string ID,name;
    double IPK;
    address prev,next;
};

struct List{
    address first;
};

bool isEmpty(List L);
address newElement(string newID, string newName, double newIPK);
void addStudent(List &L, string newID, string newName,double newIPK);
void inputStudent(List &L);
void outputStudentData(List L);
address searchStudent (List L, string xID);
void deleteP (List &L, address P);
void deleteStudent (List &L, string xID, address &P);

#endif // CIRCULAR_H_INCLUDED
