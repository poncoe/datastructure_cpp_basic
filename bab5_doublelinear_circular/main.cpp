#include "circular.h"

int main()
{
    List L; address P;
    first(L) = NULL;
    inputStudent(L);
    outputStudentData(L);
    cout <<"Hapus\n";
    deleteStudent(L,"3",P);
    outputStudentData(L);
    cout <<"Hapus\n";
    deleteStudent(L,"2",P);
    outputStudentData(L);
    cout <<"Hapus\n";
    deleteStudent(L,"1",P);
    outputStudentData(L);
    return 0;
}
