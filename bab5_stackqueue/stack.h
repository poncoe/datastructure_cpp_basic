#ifndef STACK_HPP_INCLUDED
#define STACK_HPP_INCLUDED

#include<iostream>
#define Nil NULL
#define info(P) (P)->info
#define next(P) (P)->next
#define Top(S) ((S).Top)

using namespace std;

typedef char infotype;
typedef struct elmStack *address;

struct elmStack{
    infotype info;
    address next;
};

struct stack{
    address Top;
};

/** TO DO **/
bool isEmptyS(stack S);
void createS(stack &S);
void createNewElmt(infotype X, address &P);
void push(stack &S, address P);
void pop(stack &S, address &P);
void soal2(stack &S, address &P);
void soal3(stack &S, address &P);

#endif // STACK_HPP_INCLUDED
