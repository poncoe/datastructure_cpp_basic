#include <iostream>
#include "stack.h"
#include "queue.h"
#include <stdlib.h>
using namespace std;

int main()
{
    Stack S;
    cout<<"PERHATIKAN "<<endl;
    cout<<"cara mendeklarasikan address pada stack : addressS P"<<endl;
    cout<<"cara mendeklarasikan address pada queue : addressQ P"<<endl;
    cout<<"cara mendeklarasikan isi elemen Stack : info(P)"<<endl;
    cout<<"cara mendeklarasikan isi elemen waktu pada queue : waktu(P)"<<endl;
    cout<<"cara mendeklarasikan isi elemen ID pada queue : ID(P)"<<endl;
     cout<<"\t[press enter to continue]"<<endl<<endl;
    cin.get();
    system("CLS");
    cout<<"SOAL 1 : isi prosedur dalam stack.cpp"<<endl;
    cout<<"contoh output"<<endl;
    cout<<"Masukkan Operasi Matematika : ( a * ( b - c ) + ( ( j + k ) / ( p + q * r ) ) ^ y ). "<<endl;
    cout<<"SEIMBANG"<<endl<<endl;

    cout<<"Masukkan Operasi Matematika : (a + b) * c + (a - b "<<endl;
    cout<<"TIDAK SEIMBANG"<<endl<<endl;

    cout<<"Program anda "<<endl<<endl;
    soal1();
    cin.get();
    cout<<endl<<endl<<"\t[press enter to continue]"<<endl;
    cin.get();
    system("CLS");


    cout<<"SOAL 2 : isi prosedur dalam stack.cpp"<<endl;
     cout<<"buatlah 3 Stack baru dengan createS lalu inputkan beberapa karakter ke dalam S1"<<endl;
     cout<<"lalu S1 tersebut dimasukkan ke dalam S2 dan S3 serta tampilkan isi dari ketiga Stack tersebut"<<endl;
     cout<<"perhatikan ilustrasi dalam soal sbg contoh"<<endl<<endl;
    cout<<"Program anda "<<endl<<endl;

    soal2();
    cin.get();
    cout<<"\t[press enter to continue]"<<endl;
    cin.get();
    system("CLS");

    cout<<"SOAL 3 : isi prosedur dalam queue.cpp"<<endl;
    cout<<"inputkan 5 data ke dalam Queue"<<endl;
    cout<<"program anda harus menampilkan seluruh data yg telah di input"<<endl;
    cout<<"lakukan proses dequeu enqueu di setiap literasi dan tampilkan setiap perubahannya sampai Queuenya kosong"<<endl;

    cout<<"Program anda"<<endl<<endl;
    soal3();
    cin.get();
    cout<<"\t[press enter to continue]"<<endl;
    cin.get();
    system("CLS");

    cout<<endl;

    return 0;


}
