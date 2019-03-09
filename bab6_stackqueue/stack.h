#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include<iostream>
#define Nil NULL
#define info(P) (P)->info
#define next(P) (P)->next
#define top(S) ((S).top)

using namespace std;

typedef char infotype;
typedef struct elmS *addressS;

struct elmS{
    infotype info;
    addressS next;
};

struct Stack{
    addressS top;
};

bool isEmptyS(Stack S);
void createS(Stack &S);
void createNewElmtS(infotype X, addressS &P);
void push(Stack &S, addressS P);
void pop(Stack &S, addressS &P);
void soal1();
void soal2();


#endif // STACK_H_INCLUDED
