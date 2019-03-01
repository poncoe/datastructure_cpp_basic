#include "circular.h"

bool isEmpty(List L){

    return first(L) == NULL;

}

address newElement(string newID, string newName, double newIPK){

    address P = new student;
    ID(P) = newID;
    name(P) = newName;
    IPK(P) = newIPK;
    next(P) = NULL;
    prev(P) = NULL;
    return P;

}

void addStudent(List &L, string newID, string newName,double newIPK){

    address P = newElement(newID,newName,newIPK);
    if (isEmpty(L)) {
        first(L) = P;
    } else {
        address Q = first(L);
        while (next(Q) != first(L)) {
            Q = next(Q);
        }
        next(Q) = P;
        prev(P) = Q;
    }
    next(P) = first(L);
    prev(first(L)) = P;
}

void inputStudent(List &L){

    string name,ID;
    double IPK;

    cout << "ID Mahasiswa : "; getline(cin, ID);
    while (ID != ""){
        cout << "Nama Mahasiswa : "; cin >> name;
        do {
            cout << "IPK Mahasiswa : "; cin>>IPK;
        } while (IPK < 0 || IPK > 4);
        addStudent(L,name,ID,IPK);
        cout << "\n";
        cin.ignore();
        cout << "ID Mahasiswa : "; getline(cin, ID);
    }
    cout<<"\n";
}

void outputStudentData(List L){
    if (not isEmpty(L)){
        address P = first(L);
        do{
            cout << "Nama Mahasiswa : " << name(P) << endl;
            cout << "ID Mahasiswa : " << ID(P) << endl;
            cout << "IPK Mahasiswa : " << IPK(P) << endl;
            cout << "\n";
            P = next(P);
        } while (P!=first(L));
    } else {
        cout << "Tidak Ada Data";
    }
}
address searchStudent (List L, string xID){
    address P = first(L);
    while (next(P) != first(L) && ID(P) != xID){
        P = next(P);
    }
    if (ID(P) == xID){
        return P;
    } else {
        return NULL;
    }
}

void deleteP (List &L, address P){
    if (P == first(L)){
        if (next(first(L)) == first(L)){
            first(L) = NULL;
        } else {
            address Q = first(L);
            while(next(Q) != first(L)){
                Q = next(Q);
            }
            first(L) = next(first(L));
            next(Q) = first(L);
            prev(first(L)) = Q;
        }
    } else if (next(P) == first(L)){
        if (next(first(L)) == first(L)){
            first(L) = NULL;
        } else {
            next(prev(P)) = first(L);
            prev(first(L)) = prev(P);
        }
    } else {
        next(prev(P)) = next(P);
        prev(next(P)) = prev(P);
    }
    next(P) = NULL;
    prev(P) = NULL;
}

void deleteStudent (List &L, string xID, address &P){
    P = searchStudent(L,xID);
    if (P != NULL){
        deleteP(L,P);
    }
}
