#include "doublelinier.h"

bool isEmpty(List L){
    return (first(L) == NULL);
}

address newElement(string newID, string newName, double newIPK){

    address P = new Student;
    ID(P) = newID;
    name(P) = newName;
    IPK(P) = newIPK;
    next(P) =NULL;
    prev(P) = NULL;
    return P;

}
void addStudent (List &L,string newID, string newName, double newIPK){
    address P = newElement(newID,newName,newIPK);
    if (isEmpty(L)){
        first(L) = P;
        last(L) = P;
    } else {
        next(last(L)) = P;
        prev(P) = last(L);
        last(L) = P;
    }
}

void inputStudent(List &L){

    string ID,nama;
    double IPK;
    cout<<"ID Mahasiswa   = ";
    getline(cin,ID);
    while (ID != "" ) {
        cout<<"Nama Mahasiswa = ";
        cin>>nama;
        do{
            cout<<"IPK Mahasiswa  = ";
            cin>>IPK;
        }while ((IPK < 0) || (IPK >4));

        addStudent(L,ID,nama,IPK);
        cout<<"\n";
        cin.ignore();
        cout<<"ID Mahasiswa   = ";
        getline(cin,ID);
    }
}

void outputStudentData (List L){

    address P = first(L);
    if (isEmpty(L)){
        cout<<"Tidak ada data mahasiswa"<<endl;
    } else {
        while (P != NULL){
            cout<<"ID Mahasiswa     ="<<ID(P)<<endl;
            cout<<"Nama Mahasiswa   ="<<name(P)<<endl;
            cout<<"IPK Mahasiswa    ="<<IPK(P)<<endl;
            cout<<""<<endl;
            P = next(P);
        }
    }
}

address searchStudent (List L, string xID){
    address P = first(L);
    while ((P != last(L)) && (ID(P) != xID))
        P = next(P);
    if (ID(P) == xID) {
        return P;
    } else {
        return NULL;
    }
}
void deleteP (List &L, address P){
    if ((P == first(L)) &&(P == last(L))) {
        first(L) = NULL;
        last(L) = NULL;
    } else if (P == first(L)) {
        first(L) = next(P);
        next(P) = NULL;
        prev(first(L)) = NULL;
    } else if (P == last(L)){
        last(L) = prev(P);
        next(last(L)) = NULL;
        prev(P) = NULL;
    } else {
        next(prev(P)) = next(P);
        prev(next(P)) = prev(P);
        prev(P) = NULL;
        next(P) = NULL;
    }
}


void deleteStudent (List &L, string xID, address &P) {
    P = searchStudent(L,xID);
    if (P != NULL) {
        deleteP(L,P);
    }
}
