#include <stdio.h>
#include "stack.h"


bool isEmptyS(Stack S){


    if (top(S) == Nil) {
        return true;
    }
    else{
        return false;
    }

}

void createS(Stack &S){
    top(S) = NULL;
}

void createNewElmtS(infotype X, addressS &P){
    P = new elmS;
    info(P) = X;
    next(P) = Nil;
}

void push(Stack &S, addressS P){

    if(isEmptyS(S))
    {
        top(S) = P;
    }
    else{
        next(P) = top(S);
        top(S) = P;
    }
}

void pop(Stack &S, addressS &P){

    if (!isEmptyS(S)){
        P = top(S);
        top(S) = next(top(S));
        next(P) = Nil;
    } else {
        P = NULL;
    }
}

void soal1()
{
    Stack S; addressS Q;

    createS(S); infotype input;
    int jumB = 0;
    int jumT = 0;
    cin>>input;
    while(input!='.'){
        createNewElmtS(input, Q);
        push(S, Q);
        cin>>input;
    }
    while(!isEmptyS(S)){
        pop(S, Q);
        if (info(Q)=='('){
            jumB++;
        }else if (info(Q)==')'){
            jumT++;
        }
    }
    if (jumB == 0 && jumT ==0){
        cout<<"Tidak ada tanda kurung";
    }else if (jumB==jumT){
        cout<<"SEIMBANG";
    }else{
        cout<<"TIDAK SEIMBANG";
    }
    //
}

void soal2()
{

    Stack S1,S2,S3;

    infotype input;
    addressS Q;
    createS(S1);
    createS(S2);
    createS(S3);
    cin>>input;
    while(input!='.'){
        if ( (input>= 'A' && input<='Z') ||(input>= 'a' && input<='z') ){
            createNewElmtS(input, Q);
            push(S1, Q);
        }
        cin>>input;
    }
    while(!isEmptyS(S1)){
        pop(S1, Q);
        if (info(Q)=='a' || info(Q)=='i' || info(Q)=='u' || info(Q)=='e' || info(Q)=='o' || info(Q)=='A' || info(Q)=='I' || info(Q)=='U' || info(Q)=='E' || info(Q)=='O'){
            push(S2, Q);
        }else {
            push(S3, Q);
        }
    }
    if (isEmptyS(S1)){
        cout<<"Stack S1 sudah kosong.";
    }
    cout<<endl<<"Stack S2 : ";
    while (!isEmptyS(S2)){
        pop(S2, Q);
        cout<<info(Q);
    }
    cout<<endl<<"Stack S3 : ";
    while (!isEmptyS(S3)){
        pop(S3, Q);
        cout<<info(Q);
    }
}


