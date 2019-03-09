#include<iostream>
#include"queue.h"

bool isEmptyQ(Queue Q){

    if(head(Q) == NULL && tail(Q)==NULL){
        return true;
    }else{
        return false;
    }

}

void createQ(Queue &Q){
    head(Q) = NULL;
    tail(Q) = NULL;
}

void createNewElmtQ(string ID,int waktu,addressQ &P){
    P = new elmQ;
    ID(P) = ID;
    waktu(P) = waktu;
    next(P) = NULL;
}

void enqueue(Queue &Q,addressQ P)
{
    if(isEmptyQ(Q))
    {
        head(Q) = P;
        tail(Q) = P;
    }
    else
    {
        next(tail(Q)) = P;
        tail(Q) = P;
    }
}

void dequeue(Queue &Q,addressQ &P)
{


    if(!isEmptyQ(Q))
    {
        P = head(Q);
        if(head(Q) == tail(Q))
        {
            head(Q) = NULL;
            tail(Q) = NULL;
        }
        else
        {
            head(Q) = next(head(Q));
            next(P) = NULL;
        }

    }
    else{
        P = NULL;
    }
}

void soal3()
{
    Queue Q; addressQ W;

    createQ(Q);
    createNewElmtQ("T25", 13, W);
    enqueue(Q, W);
    createNewElmtQ("T1", 4, W);
    enqueue(Q, W);
    createNewElmtQ("T11", 5, W);
    enqueue(Q, W);
    createNewElmtQ("T21", 21, W);
    enqueue(Q, W);
    createNewElmtQ("T8", 3, W);
    enqueue(Q, W);
    addressQ R;
    while(!isEmptyQ(Q)){
        dequeue(Q, W);
        if (waktu(W)>5){
            waktu(W) = waktu(W)-5;
            enqueue(Q, W);
        }
        R = head(Q);
        if (!isEmptyQ(Q)){
            cout<<"Antrian saat ini :";
            while (R!=NULL){
                cout<<" ID : "<<ID(R)<<" waktu: "<<waktu(R)<<" ";
                R = next(R);
            }
            cout<<endl;
        } else{
            cout<<"Antrian sudah kosong"<<endl;
        }
    }

}



