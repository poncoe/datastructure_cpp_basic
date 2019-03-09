#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include <iostream>
#define Nil NULL
#define ID(P) P->ID
#define waktu(P) P->waktu
#define next(P) P->next
#define head(Q) Q.head
#define tail(Q) Q.tail

using namespace std;

typedef struct elmQ * addressQ;

struct elmQ{
    string ID;
    int waktu;
    addressQ next;
};

struct Queue{
    addressQ head;
    addressQ tail;
};
bool isEmptyQ(Queue Q);
void createQ(Queue &Q);
void createNewElmtQ(string ID,int waktu,addressQ &P);
void enqueue(Queue &Q,addressQ P);
void dequeue(Queue &Q,addressQ &P);
void soal3();




#endif // QUEUE_H_INCLUDED
