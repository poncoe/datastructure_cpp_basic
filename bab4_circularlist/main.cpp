#include <iostream>
#include <stdlib.h>
#include "circularlist.h"
#include "bonus.h"

using namespace std;

int main() {
    List L;
    address P, Prec;
    infotype X, Y;

    cout<<endl;


    cout<<"1. Uji project yang diberikan: Allocation and Deallocation"<<endl;
    X = 70;
    P = allocate(X);
    cout<<"    print X        = "<<X<<endl;
    cout<<"    P = allocate(X)"<<endl;
    cout<<"    print info(P)  = "<<info(P)<<endl;
    cout<<"    print address dari elemen P = "<<P<<endl;
    cout<<""<<endl;
    cout<<"    [press enter to continue]"<<endl;
    cin.get();
    cout<<"    deallocate(P)"<<endl;
    deallocate(P);
    /**  cout<<"    print info(P)  = "<<info(P)<<endl;          // this will cause error  */
    cout<<"    print address dari elemen P = "<<P<<endl;
    cout<<"    [press enter to continue]"<<endl;
    cin.get();
    system("cls");
    cout<<endl;

    cout<<"2. Test prosedur insertFirst(List &L, address P) dan printInfo(List L)"<<endl;
    createList(L);
    cout<<"    List awal [empty]: ";
    printInfo(L);
    cout<<endl;
    cout<<"    Insert First info = 70"<<endl;
    insertFirst(L, allocate(70));
    cout<<"    List seharusnya : 70, "<<endl;
    cout<<"    List anda       : ";
    printInfo(L);
    cout<<endl;
    cout<<"    Insert First info = 20"<<endl;
    insertFirst(L, allocate(20));
    cout<<"    List seharusnya : 20, 70, "<<endl;
    cout<<"    List anda       : ";
    printInfo(L);
    cout<<endl;
    cout<<"    Insert First info = 50"<<endl;
    insertFirst(L, allocate(50));
    cout<<"    List seharusnya : 50, 20, 70, "<<endl;
    cout<<"    List anda       : ";
    printInfo(L);
    cout<<endl;
    cout<<"    Insert First info = 40"<<endl;
    insertFirst(L, allocate(40));
    cout<<"    List seharusnya : 40, 50, 20, 70, "<<endl;
    cout<<"    List anda       : ";
    printInfo(L);
    cout<<endl;
    checkCircular(L);
    cout<<"    [press enter to continue]"<<endl;
    cin.get();
    system("cls");
    cout<<endl;

    cout<<"3. Uji prosedur deleteFirst(List &L, address &P)"<<endl;
    cout<<"    ** Anda mungkin akan mendapat error pada bagian ini**"<<endl;
    cout<<"    ** Berpikirlah, mengapa hal tersebut terjadi, kemudian tanyakan asprak anda **"<<endl<<endl;
    cout<<"    Initial List: "; printInfo(L);
    cout<<endl;
    cout<<"    Delete First"<<endl; deleteFirst(L, P);
    cout<<"    Info(P) Seharusnya   : 40"<<endl;
    cout<<"    Info(P) anda         : "<<info(P)<<endl;
    cout<<"    List seharusnya      : 50, 20, 70, "<<endl;
    cout<<"    List anda            : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    Delete First"<<endl; deleteFirst(L, P);
    cout<<"    Info(P) seharusnya   : 50"<<endl;
    cout<<"    Info(P) anda         : "<<info(P)<<endl;
    cout<<"    List seharusnya      : 20, 70, "<<endl;
    cout<<"    List anda            : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;


    cout<<"3. Uji prosedur deleteFirst(List &L, address &P) [Cont'd]"<<endl;
    cout<<"    Initial List: "; printInfo(L);
    cout<<endl;
    cout<<"    Delete First"<<endl; deleteFirst(L, P);
    cout<<"    Info(P) seharusnya   : 20"<<endl;
    cout<<"    Info(P) anda         : "<<info(P)<<endl;
    cout<<"    List seharusnya      : 70, "<<endl;
    cout<<"    List anda            : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    Delete First"<<endl; deleteFirst(L, P);
    cout<<"    Info(P) seharusnya   : 70"<<endl;
    cout<<"    Info(P) anda         : "<<info(P)<<endl;
    cout<<"    List seharusnya      : [empty] "<<endl;
    cout<<"    List anda            : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    Delete First"<<endl;
    cout<<"    your procedure should check if the list is already empty"<<endl;
    deleteFirst(L, P);
    cout<<"    address P should be  : 0 (NULL)"<<endl;
    cout<<"    Your address P       : "<<P<<endl;
    cout<<"    List seharusnya      : [empty] "<<endl;
    cout<<"    List anda            : "; printInfo(L);
    cout<<endl;
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;


    cout<<"4. Test the procedure insertLast(List &L, address P)"<<endl;
    cout<<"    Initial List: "; printInfo(L);
    cout<<endl;
    cout<<"    Insert Last info = 30"<<endl;
    insertLast(L, allocate(30));
    cout<<"    List Seharusnya    : 30, "<<endl;
    cout<<"    List anda          : ";
    printInfo(L);
    cout<<endl;
    cout<<"    Insert Last info = 40"<<endl;
    insertLast(L, allocate(40));
    cout<<"    List Seharusnya    : 30, 40, "<<endl;
    cout<<"    List anda          : ";
    printInfo(L);
    cout<<endl;
    cout<<"    Insert Last info = 10"<<endl;
    insertLast(L, allocate(10));
    cout<<"    List Seharusnya    : 30, 40, 10,  "<<endl;
    cout<<"    List anda          : ";
    printInfo(L);
    cout<<endl;
    cout<<"    Insert Last info = 80"<<endl;
    insertLast(L, allocate(80));
    cout<<"    List Seharusnya    : 30, 40, 10, 80, "<<endl;
    cout<<"    List anda          : ";
    printInfo(L);
    cout<<endl;
    checkCircular(L);
    cout<<"    [press enter to continue]"<<endl;
    cin.get();
    system("cls");
    cout<<endl;


    cout<<"5. Uji prosedur deleteLast(List &L, address &P)"<<endl;
    cout<<"    ** Anda mungkin akan mendapat error pada bagian ini**"<<endl;
    cout<<"    ** Berpikirlah, mengapa hal tersebut terjadi, kemudian tanyakan asprak anda **"<<endl<<endl;
    cout<<"    Initial List: "; printInfo(L);
    cout<<endl;
    cout<<"    Delete Last"<<endl; deleteLast(L, P);
    cout<<"    Info(P) seharusnya    : 80"<<endl;
    cout<<"    Info(P) anda          : "<<info(P)<<endl;
    cout<<"    List seharusnya       : 30, 40, 10, "<<endl;
    cout<<"    List anda             : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    Delete Last"<<endl; deleteLast(L, P);
    cout<<"    Info(P) seharusnya    : 10"<<endl;
    cout<<"    Info(P) anda          : "<<info(P)<<endl;
    cout<<"    List seharusnya       : 30, 40, "<<endl;
    cout<<"    List anda             : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    checkCircular(L);
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;


    cout<<"5. Uji prosedur deleteLast(List &L, address &P) [Cont'd]"<<endl;
    cout<<"    Initial List: "; printInfo(L);
    cout<<endl;
    cout<<"    Delete Last"<<endl; deleteLast(L, P);
    cout<<"    Info(P) seharusnya    : 40"<<endl;
    cout<<"    Info(P) anda          : "<<info(P)<<endl;
    cout<<"    List seharusnya       : 30, "<<endl;
    cout<<"    List anda             : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    Delete Last"<<endl; deleteLast(L, P);
    cout<<"    Info(P) seharusnya    : 30"<<endl;
    cout<<"    Info(P) anda          : "<<info(P)<<endl;
    cout<<"    List seharusnya       : [empty] "<<endl;
    cout<<"    List anda             : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    Delete Last"<<endl;
    cout<<"    Prosedur anda harus mengecek apakah list kosong"<<endl;
    deleteLast(L, P);
    cout<<"    address P seharusnya : 0 (NULL)"<<endl;
    cout<<"    Address P anda       : "<<P<<endl;
    cout<<"    List seharusnya      : [empty] "<<endl;
    cout<<"    List anda            : "; printInfo(L);
    cout<<endl;
    checkCircular(L);
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;


    cout<<"6. Uji prosedur deleteAfter(List &L, address &P)"<<endl;
    cout<<"    ** Anda mungkin akan mendapat error pada bagian ini**"<<endl;
    cout<<"    ** Berpikirlah, mengapa hal tersebut terjadi, kemudian tanyakan asprak anda **"<<endl<<endl;
    createList(L);
    insertFirst(L,allocate(30));
    insertFirst(L,allocate(60));
    insertFirst(L,allocate(80));
    insertFirst(L,allocate(20));
    insertFirst(L,allocate(10));
    insertFirst(L,allocate(90));

    cout<<"    Initial List: "; printInfo(L);
    cout<<endl;
    Prec = next(next(first(L)));
    cout<<"    Info(Prec) seharusnya : 20"<<endl;
    cout<<"    Info(Prec) anda       : "<<info(Prec)<<endl;
    cout<<"    Delete After"<<endl;deleteAfter(L, Prec, P);
    cout<<"    Info(P) seharusnya    : 80"<<endl;
    cout<<"    Info(P) anda          : "<<info(P)<<endl;
    cout<<"    List Seharusnya       : 90, 10, 20, 60, 30,  "<<endl;
    cout<<"    List anda             : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    Prec = first(L);
    cout<<"    Info(Prec) seharusnya : 90 (First L)"<<endl;
    cout<<"    Info(Prec) anda       : "<<info(Prec)<<endl;
    cout<<"    Delete After"<<endl;deleteAfter(L, Prec, P);
    cout<<"    Info(P) seharusnya    : 10"<<endl;
    cout<<"    Info(P) anda          : "<<info(P)<<endl;
    cout<<"    List Seharusnya       : 90, 20, 60, 30"<<endl;
    cout<<"    List anda             : "; printInfo(L);
    deallocate(P);
    checkCircular(L);
    cout<<endl;
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;



    cout<<"6. Uji prosedur deleteAfter(List &L, address Prec, address &P) [Cont'd]"<<endl;
    cout<<"    Initial List: "; printInfo(L);
    cout<<endl;
    Prec = prev(last(L));
    cout<<"    Info(Prec) seharusnya : 60"<<endl;
    cout<<"    Info(Prec) anda       : "<<info(Prec)<<endl;
    cout<<"    Delete After"<<endl;deleteAfter(L, Prec, P);
    cout<<"    Info(P) seharusnya    : 30"<<endl;
    cout<<"    Info(P) anda          : "<<info(P)<<endl;
    cout<<"    List Seharusnya       : 90, 20, 60, "<<endl;
    cout<<"    List anda             : "; printInfo(L);
    deallocate(P);
    checkCircular(L);
    cout<<endl;
    Prec = last(L);
    cout<<"    Info(Prec) seharusnya : 60 (Last L)"<<endl;
    cout<<"    Info(Prec) anda       : "<<info(Prec)<<endl;
    cout<<"    Delete After"<<endl;deleteAfter(L, Prec, P);
    cout<<"    List Seharusnya       : 20, 60, "<<endl;
    cout<<"    List anda             : "; printInfo(L);
    deallocate(P);
    checkCircular(L);
    cout<<endl;
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;

    cout<<endl;
    cout<<"Separate Even Odd"<<endl;
    cout<<endl;
    cout<<"Examine the provided separateEvenOdd procedure, and observe the result below"<<endl;
    insertFirst(L,allocate(85));
    insertFirst(L,allocate(23));
    insertFirst(L,allocate(12));
    insertFirst(L,allocate(91));
    insertFirst(L,allocate(72));
    insertFirst(L,allocate(33));
    cout<<"    Initial List L1  : "; printInfo(L);
    cout<<"    Perform Separate Even Odd"<<endl;
    List L2, L3;
    separateEvenOdd(L, L2, L3);
    cout<<"    Result List L1   : "; printInfo(L);
    cout<<"    Result List L2   : "; printInfo(L2);
    cout<<"    Result List L3   : "; printInfo(L3);
    cout<<"    [press enter to continue]"<<endl;
    cin.get();
    system("cls");
    cout<<endl;


    cout<<"Move Zeros"<<endl;
    cout<<endl;
    cout<<"Examine the provided moveZeros procedure, and observe the result below"<<endl;
    createList(L);
    insertFirst(L,allocate(0));
    insertFirst(L,allocate(0));
    insertFirst(L,allocate(2));
    insertFirst(L,allocate(5));
    insertFirst(L,allocate(0));
    insertFirst(L,allocate(4));
    insertFirst(L,allocate(0));
    insertFirst(L,allocate(1));
    insertFirst(L,allocate(1));
    insertFirst(L,allocate(0));
    insertFirst(L,allocate(2));
    insertFirst(L,allocate(7));
    insertFirst(L,allocate(0));
    insertFirst(L,allocate(0));
    insertFirst(L,allocate(9));
    insertFirst(L,allocate(0));
    insertFirst(L,allocate(1));
    insertFirst(L,allocate(2));
    cout<<"    Initial List L  : "; printInfo(L);
    cout<<"    Perform Move Zeros"<<endl;
    moveZeros(L);
    cout<<"    Result List L   : "; printInfo(L);
    cout<<"    [press enter to continue]"<<endl;
    cin.get();
    system("cls");
    cout<<endl;

    return 0;
}
