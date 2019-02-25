#include <iostream>
#include <stdlib.h>
#include "doublelist.h"
#include "bonus.h"

using namespace std;

int main() {
    List L;
    address P, Prec;
    infotype X, Y;

    cout<<endl;
    cout<<"Hello, Selamat Datang di Double Linked List"<<endl<<
        "\t\t"<<endl<<endl;


    cout<<"1a. Uji project yang diberikan: Allocation dan Deallocation"<<endl;
    X = 'A';
    P = allocate(X);
    cout<<"    print X        = "<<X<<endl;
    cout<<"    P = allocate(X)"<<endl;
    cout<<"    print info(P)  = "<<info(P)<<endl;
    cout<<"    print alamat dari element P = "<<P<<endl;
    cout<<""<<endl;
    cout<<"    [press enter to continue]"<<endl;
    cin.get();
    cout<<"    deallocate(P)"<<endl;
    deallocate(P);
    /**  cout<<"    print info(P)  = "<<info(P)<<endl;          // ini akan menyebabkan error  */
    cout<<"    print alamat dari element P = "<<P<<endl;
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;
    cout<<"1b. Uji project yang diberikan: Create List dan Print Info"<<endl;
    createList(L);
    cout<<"    Uji Print Info untuk List L"<<endl;
    printInfo(L);
    cout<<"    Anda bisa memodifikasi prosedur printInfo(List L) untuk menunjukkan pesan"<<endl
        <<"    ketika list kosong"<<endl;
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;


    cout<<"2. Uji prosedur insertFirst(List &L, address P)"<<endl;
    createList(L);
    cout<<"    List awal [empty]: "; printInfo(L);
    cout<<endl;
    cout<<"    Insert First info = L"<<endl;
    insertFirst(L, allocate('L'));
    cout<<"    List seharusnya : L, "<<endl;
    cout<<"    List anda       : "; printInfo(L);
    cout<<endl;
    cout<<"    Insert First info = M"<<endl;
    insertFirst(L, allocate('M'));
    cout<<"    List seharusnya : M, L, "<<endl;
    cout<<"    List anda       : "; printInfo(L);
    cout<<endl;
    cout<<"    Insert First info = I"<<endl;
    insertFirst(L, allocate('I'));
    cout<<"    List seharusnya : I, M, L, "<<endl;
    cout<<"    List anda       : "; printInfo(L);
    cout<<endl;
    cout<<"    Insert First info = S"<<endl;
    insertFirst(L, allocate('S'));
    cout<<"    List seharusnya : S, I, M, L, "<<endl;
    cout<<"    List anda       : "; printInfo(L);
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;


    cout<<"3. Ujilah function findElement(List L, infotype x)"<<endl;
    cout<<"    List awal: "; printInfo(L);
    cout<<endl;
    cout<<"    Cari Element = S"<<endl;
    P = findElement(L, 'S');
    cout<<"    info(P) seharusnya   : S "<<endl;
    cout<<"    info(P) anda         : "<<info(P)<<endl;
    cout<<"    address P seharusnya : "<<first(L)<<endl;
    cout<<"    address P anda       : "<<P<<endl;
    cout<<endl;
    cout<<"    Cari Element = M"<<endl;
    P = findElement(L, 'M');
    cout<<"    info(P) seharusnya   : M "<<endl;
    cout<<"    info(P) anda         : "<<info(P)<<endl;
    cout<<"    address P seharusnya : "<<prev(last(L))<<endl;
    cout<<"    address P anda       : "<<P<<endl;
    cout<<endl;
    cout<<"    Cari Element = X"<<endl;
    P = findElement(L, 'X');
    cout<<"    The address P should be : 0"<<endl;
    cout<<"    Your address P          : "<<P<<endl;
    cout<<endl;
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;

    cout<<"4. Uji prosedur insertAfter(List &L, address Prec, address P)"<<endl;
    cout<<"    ** Anda mungkin akan mendapat error pada bagian ini**"<<endl;
    cout<<"    ** Berpikirlah, mengapa hal tersebut terjadi, kemudian tanyakan asprak anda **"<<endl<<endl;
    cout<<"    List awal: "; printInfo(L);
    cout<<endl;
    cout<<"    Cari Element = L"<<endl;
    Prec = findElement(L, 'L');
    cout<<"    Info(Prec) Seharusnya : L"<<endl;
    cout<<"    Info(Prec) anda       : "<<info(Prec)<<endl;
    cout<<"    Insert After Prec dengan info = E"<<endl;
    insertAfter(L, Prec, allocate('E'));
    cout<<"    List seharusnya   : S, I, M, L, E, "<<endl;
    cout<<"    List anda         : "; printInfo(L);
    cout<<endl;
    cout<<"    Cari Element = M"<<endl;
    Prec = findElement(L, 'M');
    cout<<"    Info(Prec) Seharusnya : L"<<endl;
    cout<<"    Info(Prec) anda       : "<<info(Prec)<<endl;
    cout<<"    Insert After Prec dengan info = P"<<endl;
    insertAfter(L, Prec, allocate('P'));
    cout<<"    List seharusnya   : S, I, M, P, L, E, "<<endl;
    cout<<"    List anda         : "; printInfo(L);
    cout<<endl;
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;


    cout<<"4. Uji prosedur insertAfter(List &L, address Prec, address P) [Cont'd]"<<endl;
    cout<<"    List awal: "; printInfo(L);
    cout<<endl;
    cout<<"    Cari Element = O"<<endl;
    Prec = findElement(L, 'O');
    cout<<"    Prec seharusnya     : 0"<<endl;
    cout<<"    Prec anda          : "<<Prec<<endl;
    cout<<"    Insert After Prec dengan info = H"<<endl;
    insertAfter(L, Prec, allocate('H'));
    cout<<"    List seharusnya   : S, I, M, P, L, E, "<<endl;
    cout<<"    List anda         : "; printInfo(L);
    cout<<endl;
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;

    cout<<"5. Uji prosedur deleteLast(List &L, address &P)"<<endl;
    cout<<"    ** Anda mungkin akan mendapat error pada bagian ini**"<<endl;
    cout<<"    ** Berpikirlah, mengapa hal tersebut terjadi, kemudian tanyakan asprak anda **"<<endl<<endl;
    cout<<"    List awal: "; printInfo(L);
    cout<<endl;
    cout<<"    Delete Last"<<endl; deleteLast(L, P);
    cout<<"    Info(P) seharusnya  : E"<<endl;
    cout<<"    Info(P) anda        : "<<info(P)<<endl;
    cout<<"    List seharusnya     : S, I, M, P, L, "<<endl;
    cout<<"    List anda           : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;

    cout<<"6. Uji prosedur deleteAfter(List &L, address Prec, address &P)"<<endl;
    cout<<"    ** Anda mungkin akan mendapat error pada bagian ini**"<<endl;
    cout<<"    ** Berpikirlah, mengapa hal tersebut terjadi, kemudian tanyakan asprak anda **"<<endl<<endl;
    cout<<"    List awal:"; printInfo(L);
    cout<<endl;
    cout<<"    Cari Element = I"<<endl;Prec = findElement(L, 'I');
    cout<<"    Info(Prec) seharusnya  : I"<<endl;
    cout<<"    Info(Prec) anda        : "<<info(Prec)<<endl;
    cout<<"    Delete After"<<endl;deleteAfter(L, Prec, P);
    cout<<"    Info(P) seharusnya     : M"<<endl;
    cout<<"    Info(P) anda           : "<<info(P)<<endl;
    cout<<"    List seharusnya        : S, I, P, L, "<<endl;
    cout<<"    List anda              : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    Cari Element = P"<<endl;Prec = findElement(L, 'P');
    cout<<"    Info(Prec) seharusnya  : P"<<endl;
    cout<<"    Info(Prec) anda        : "<<info(Prec)<<endl;
    cout<<"    Delete After"<<endl;deleteAfter(L, Prec, P);
    cout<<"    Info(P) seharusnya     : L"<<endl;
    cout<<"    Info(P) anda           : "<<info(P)<<endl;
    cout<<"    List seharusnya        : S, I, P, "<<endl;
    cout<<"    List anda              : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;

    cout<<"6. Uji the prosedur deleteAfter(List &L, address Prec, address &P) [lanjutan]"<<endl;
    cout<<"    List awal: "; printInfo(L);
    cout<<endl;
    cout<<"    Cari Element = P"<<endl;Prec = findElement(L, 'P');
    cout<<"    Info(Prec) seharusnya  : P"<<endl;
    cout<<"    Info(Prec) anda        : "<<info(Prec)<<endl;
    cout<<"    Delete After"<<endl;deleteAfter(L, Prec, P);
    cout<<"    List seharusnya        : S, I, P, "<<endl;
    cout<<"    List anda              : "; printInfo(L);
    cout<<endl;
    cout<<"    Find Element = A"<<endl;Prec = findElement(L, 'A');
    cout<<"    Prec seharusnya        : 0"<<endl;
    cout<<"    Prec anda              : "<<Prec<<endl;
    cout<<"    Delete After"<<endl;deleteAfter(L, Prec, P);
    cout<<"    List seharusnya        : S, I, P, "<<endl;
    cout<<"    List anda              : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    Cari Element = S"<<endl;Prec = findElement(L, 'S');
    cout<<"    Prec seharusnya        : S"<<endl;
    cout<<"    Prec anda              : "<<info(Prec)<<endl;
    cout<<"    Delete After"<<endl;deleteAfter(L, Prec, P);
    cout<<"    Info(P) seharusnya     : I"<<endl;
    cout<<"    Info(P) anda           : "<<info(P)<<endl;
    cout<<"    List seharusnya        : S, P, "<<endl;
    cout<<"    List anda              : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;

    cout<<"5. Uji prosedur deleteLast(List &L, address &P) [lanjutan]"<<endl;
    cout<<"    List awal: "; printInfo(L);
    cout<<endl;
    cout<<"    Delete Last"<<endl; deleteLast(L, P);
    cout<<"    Info(P) seharusnya     : P"<<endl;
    cout<<"    Info(P) anda           : "<<info(P)<<endl;
    cout<<"    List seharusnya        : S, "<<endl;
    cout<<"    List anda              : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    Delete Last"<<endl; deleteLast(L, P);
    cout<<"    Info(P) seharusnya     : S"<<endl;
    cout<<"    Info(P) anda           : "<<info(P)<<endl;
    cout<<"    List seharusnya        : [empty] "<<endl;
    cout<<"    List anda              : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    Delete Last"<<endl; deleteLast(L, P);
    cout<<"    List seharusnya        : [empty] "<<endl;
    cout<<"    List anda              : "; printInfo(L);
    cout<<endl;
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;

    cout<<"Anda telah menyelesaikan jurnal 3"<<endl;
    cout<<endl;
    cout<<"BONUS: Find Biggest"<<endl;
    cout<<"Amati prosedur findBiggest yang telah diberikan, kemudian amati hasil dibawah"<<endl;
    createList(L);
    insertFirst(L,allocate('T'));
    insertFirst(L,allocate('A'));
    insertFirst(L,allocate('D'));
    insertFirst(L,allocate('K'));
    insertFirst(L,allocate('U'));
    insertFirst(L,allocate('R'));
    insertFirst(L,allocate('T'));
    insertFirst(L,allocate('S'));

    List L1;
    createList(L1);
    insertFirst(L1,allocate('K'));
    insertFirst(L1,allocate('I'));
    insertFirst(L1,allocate('Y'));
    insertFirst(L1,allocate('S'));
    insertFirst(L1,allocate('A'));
    cout<<"    List L1 awal  : "; printInfo(L);
    cout<<"    List L2 awal  : "; printInfo(L1);
    cout<<"    Eksekusi Find Biggest"<<endl;
    cout<<"    Found : ";findBiggest(L, L1);
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;

    cout<<"BONUS: Insertion Sort"<<endl;
    cout<<"Amati prosedur insertionSort yang telah diberikan, kemudian amati hasil dibawah"<<endl;
    cout<<"    List awal: "; printInfo(L);
    cout<<"    Eksekusi Insertion Sort"<<endl;
    insertionSort(L);
    cout<<"    List terurut : "; printInfo(L);
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;

    cout<<"BONUS: Reverse Half"<<endl;
    cout<<"Amati prosedur reverseHalf insertionSort yang telah diberikan, kemudian amati hasil dibawah"<<endl;
    cout<<"    List awal  : "; printInfo(L);
    cout<<"    Eksekusi Reverse Half"<<endl;
    reverseHalf(L);
    cout<<"    List yang sudah dibalik : "; printInfo(L);
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;

    return 0;
}
