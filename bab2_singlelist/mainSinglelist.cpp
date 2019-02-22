#include <iostream>
#include <stdlib.h>
#include "singlelist.h"

using namespace std;

int main() {
    List L;
    address P, Q;
    infotype X, Y;

    cout<<endl;
    cout<<"Hello, Selamat Datang di Single Linked List"<< endl;
    cout <<""<<endl;


    cout<<"1a. Uji project berikut: Allocation dan Deallocation"<<endl;
    X = 10;
    P = allocate(X);
    cout<<"    print X        = "<<X<<endl;
    cout<<"    P = allocate(X)"<<endl;
    cout<<"    print info(P)  = "<<info(P)<<endl;
    cout<<"    print alamat dari elemen P = "<<P<<endl;
    cout<<""<<endl;
    cout<<"    [Tekan enter untuk lanjut]"<<endl;
    cin.get();
    cout<<"    deallocate(P)"<<endl;
    deallocate(P);
    /**  cout<<"    print info(P)  = "<<info(P)<<endl;          // this will cause error  */
    cout<<"    print alamat dari elemen P = "<<P<<endl;
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;
    cout<<"1b. Ujilah project berikut: Create List dan Print Info"<<endl;
    createList(L);
    cout<<"    Ujilah Print Info untuk List L"<<endl;
    printInfo(L);
    cout<<"    anda bisa memodifikasi prosedur printInfo(List L) untuk menampilkan pesan"<<endl
        <<"    saat list kosong"<<endl;
    cout<<"    [Tekan enter untuk lanjut]"<<endl;
    cin.get();system("cls");
    cout<<endl;


    cout<<"2. Uji prosedur insertFirst(List &L, address P)"<<endl;
    createList(L);
    cout<<"    Initial list [kosong]: "; printInfo(L);
    cout<<endl;
    cout<<"    Insert First info = 5"<<endl;
    insertFirst(L, allocate(5));
    cout<<"    Isi list seharusnya : 5, "<<endl;
    cout<<"    List anda           : "; printInfo(L);
    cout<<endl;
    cout<<"    Insert First info = 8"<<endl;
    insertFirst(L, allocate(8));
    cout<<"    Isi list seharusnya : 8, 5, "<<endl;
    cout<<"    List anda           : "; printInfo(L);
    cout<<endl;
    cout<<"    Insert First info = 0"<<endl;
    insertFirst(L, allocate(0));
    cout<<"    Isi list seharusnya : 0, 8, 5, "<<endl;
    cout<<"    List anda           : "; printInfo(L);
    cout<<endl;
    cout<<"    Insert First info = 3"<<endl;
    insertFirst(L, allocate(3));
    cout<<"    Isi list seharusnya : 3, 0, 8, 5, "<<endl;
    cout<<"    List anda           : "; printInfo(L);
    cout<<"    [Tekan enter untuk lanjut]"<<endl;
    cin.get();system("cls");
    cout<<endl;


    cout<<"3. Uji prosedur deleteFirst(List &L, address &P)"<<endl;
    cout<<"    ** Anda mungkin mendapat error pada bagian ini**"<<endl;
    cout<<"    ** pikirlah mengapa hal tersebut dapat terjadi, kemudian tanyakan asprak anda **"<<endl<<endl;
    cout<<"    Initial List: "; printInfo(L);
    cout<<endl;
    cout<<"    Delete First"<<endl; deleteFirst(L, P);
    cout<<"    Info(P) seharusnya   : 3"<<endl;
    cout<<"    Info(P) anda         : "<<info(P)<<endl;
    cout<<"    List seharusnya      : 0, 8, 5, "<<endl;
    cout<<"    List anda            : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    Delete First"<<endl; deleteFirst(L, P);
    cout<<"    Info(P) seharusnya   : 0"<<endl;
    cout<<"    Info(P) anda         : "<<info(P)<<endl;
    cout<<"    List seharusnya      : 8, 5, "<<endl;
    cout<<"    List anda            : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    [Tekan enter untuk lanjut]"<<endl;
    cin.get();system("cls");
    cout<<endl;


    cout<<"3. Uji prosedur deleteFirst(List &L, address &P) [Cont'd]"<<endl;
    cout<<"    Initial List: "; printInfo(L);
    cout<<endl;
    cout<<"    Delete First"<<endl; deleteFirst(L, P);
    cout<<"    Info(P) seharusnya   : 8"<<endl;
    cout<<"    Info(P) anda         : "<<info(P)<<endl;
    cout<<"    List seharusnya      : 5, "<<endl;
    cout<<"    List anda            : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    Delete First"<<endl; deleteFirst(L, P);
    cout<<"    Info(P) seharusnya   : 5"<<endl;
    cout<<"    Info(P) anda         : "<<info(P)<<endl;
    cout<<"    List seharusnya      : [kosong] "<<endl;
    cout<<"    List anda            : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    Delete First"<<endl;
    cout<<"    prosedur anda harus mengecek apakah list kosong"<<endl;
    deleteFirst(L, P);
    cout<<"    address P seharusnya  : 0 (NULL)"<<endl;
    cout<<"    address P anda       : "<<P<<endl;
    cout<<"    List seharusnya      : [kosong] "<<endl;
    cout<<"    List anda            : "; printInfo(L);
    cout<<endl;
    cout<<"    [Tekan enter untuk lanjut]"<<endl;
    cin.get();system("cls");
    cout<<endl;


    cout<<"4. Uji prosedur insertLast(List &L, address P)"<<endl;
    cout<<"    ** Anda mungkin mendapat error pada bagian ini**"<<endl;
    cout<<"    ** pikirlah mengapa hal tersebut dapat terjadi, kemudian tanyakan asprak anda **"<<endl<<endl;
    createList(L);
    cout<<"    Initial List [kosong]: "; printInfo(L);
    cout<<endl;
    cout<<"    Insert Last info = 5"<<endl;
    cout<<"    prosedur anda harus mengecek apakah list kosong"<<endl;
    insertLast(L, allocate(5));
    cout<<"    List seharusnya    : 5, "<<endl;
    cout<<"    List anda          : "; printInfo(L);
    cout<<endl;
    cout<<"    Insert Last info = 8"<<endl;
    insertLast(L, allocate(8));
    cout<<"    List seharusnya    : 5, 8, "<<endl;
    cout<<"    List anda          : "; printInfo(L);
    cout<<endl;
    cout<<"    Insert Last info = 0"<<endl;
    insertLast(L, allocate(0));
    cout<<"    List seharusnya    : 5, 8, 0, "<<endl;
    cout<<"    List anda          : "; printInfo(L);
    cout<<endl;
    cout<<"    Insert Last info = 3"<<endl;
    insertLast(L, allocate(3));
    cout<<"    List seharusnya    : 5, 8, 0, 3, "<<endl;
    cout<<"    List anda          : "; printInfo(L);
    cout<<"    [Tekan enter untuk lanjut]"<<endl;
    cin.get();system("cls");
    cout<<endl;


    cout<<"5. Test the procedure deleteLast(List &L, address &P)"<<endl;
    cout<<"    ** Anda mungkin mendapat error pada bagian ini**"<<endl;
    cout<<"    ** pikirlah mengapa hal tersebut dapat terjadi, kemudian tanyakan asprak anda **"<<endl<<endl;
    cout<<"    Initial List: "; printInfo(L);
    cout<<endl;
    cout<<"    Delete Last"<<endl; deleteLast(L, P);
    cout<<"    Info(P) seharusnya : 3"<<endl;
    cout<<"    Info(P) anda       : "<<info(P)<<endl;
    cout<<"    List seharusnya    : 5, 8, 0, "<<endl;
    cout<<"    List anda          : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    Delete Last"<<endl; deleteLast(L, P);
    cout<<"    Info(P) seharusnya : 0"<<endl;
    cout<<"    Info(P) anda       : "<<info(P)<<endl;
    cout<<"    List seharusnya    : 5, 8, "<<endl;
    cout<<"    List anda          : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    [Tekan enter untuk lanjut]"<<endl;
    cin.get();system("cls");
    cout<<endl;


    cout<<"5. Test the procedure deleteLast(List &L, address &P) [Cont'd]"<<endl;
    cout<<"    Initial List: "; printInfo(L);
    cout<<endl;
    cout<<"    Delete Last"<<endl; deleteLast(L, P);
    cout<<"    Info(P) seharusnya : 8"<<endl;
    cout<<"    Info(P) anda       : "<<info(P)<<endl;
    cout<<"    List seharusnya    : 5, "<<endl;
    cout<<"    List anda          : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    Delete Last"<<endl; deleteLast(L, P);
    cout<<"    Info(P) seharusnya : 5"<<endl;
    cout<<"    Info(P) anda       : "<<info(P)<<endl;
    cout<<"    List seharusnya    : [kosong] "<<endl;
    cout<<"    List anda          : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    Delete Last"<<endl;
    cout<<"    prosedur anda harus mengecek apakah list kosong"<<endl;
    deleteLast(L, P);
    cout<<"    address P seharusnya: 0 (NULL)"<<endl;
    cout<<"    address P anda      : "<<P<<endl;
    cout<<"    List seharusnya     : [kosong] "<<endl;
    cout<<"    List anda           : "; printInfo(L);
    cout<<endl;
    cout<<"    [Tekan enter untuk lanjut]"<<endl;
    cin.get();system("cls");
    cout<<endl;


    cout<<"Anda telah menyelesaikan jurnal modul 2"<<endl;
    cout<<endl;
    cout<<"BONUS: Reverse List"<<endl;
    cout<<"Amati prosedur reverseList yang telah tersedia, amati hasil dibawah:"<<endl;
    createList(L);
    insertFirst(L,allocate(3));
    insertFirst(L,allocate(6));
    insertFirst(L,allocate(8));
    insertFirst(L,allocate(2));
    insertFirst(L,allocate(9));
    cout<<"sebelum reverse : ";printInfo(L);
    reverseList(L);
    cout<<"setelah reverse  : ";printInfo(L);

    cout<<""<<endl;
    return 0;
}

