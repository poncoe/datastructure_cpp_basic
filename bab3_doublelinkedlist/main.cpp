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


    cout<<"1a. Test the given project: Allocation and Deallocation"<<endl;
    X = 'A';
    P = allocate(X);
    cout<<"    print X        = "<<X<<endl;
    cout<<"    P = allocate(X)"<<endl;
    cout<<"    print info(P)  = "<<info(P)<<endl;
    cout<<"    print address of the element P = "<<P<<endl;
    cout<<""<<endl;
    cout<<"    [press enter to continue]"<<endl;
    cin.get();
    cout<<"    deallocate(P)"<<endl;
    deallocate(P);
    /**  cout<<"    print info(P)  = "<<info(P)<<endl;          // this will cause error  */
    cout<<"    print address of the element P = "<<P<<endl;
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;
    cout<<"1b. Test the given project: Create List and Print Info"<<endl;
    createList(L);
    cout<<"    Test Print Info of the List L"<<endl;
    printInfo(L);
    cout<<"    you can modify the printInfo(List L) procedure to show some message"<<endl
        <<"    when the list is empty"<<endl;
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;


    cout<<"2. Test the procedure insertFirst(List &L, address P)"<<endl;
    createList(L);
    cout<<"    Initial List is [empty]: "; printInfo(L);
    cout<<endl;
    cout<<"    Insert First info = L"<<endl;
    insertFirst(L, allocate('L'));
    cout<<"    The list should be : L, "<<endl;
    cout<<"    Your list          : "; printInfo(L);
    cout<<endl;
    cout<<"    Insert First info = M"<<endl;
    insertFirst(L, allocate('M'));
    cout<<"    The list should be : M, L, "<<endl;
    cout<<"    Your list          : "; printInfo(L);
    cout<<endl;
    cout<<"    Insert First info = I"<<endl;
    insertFirst(L, allocate('I'));
    cout<<"    The list should be : I, M, L, "<<endl;
    cout<<"    Your list          : "; printInfo(L);
    cout<<endl;
    cout<<"    Insert First info = S"<<endl;
    insertFirst(L, allocate('S'));
    cout<<"    The list should be : S, I, M, L, "<<endl;
    cout<<"    Your list          : "; printInfo(L);
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;


    cout<<"3. Test the function findElement(List L, infotype x)"<<endl;
    cout<<"    Initial List: "; printInfo(L);
    cout<<endl;
    cout<<"    Find Element = S"<<endl;
    P = findElement(L, 'S');
    cout<<"    The info(P) should be   : S "<<endl;
    cout<<"    Your info(P)            : "<<info(P)<<endl;
    cout<<"    The address P should be : "<<first(L)<<endl;
    cout<<"    Your address P          : "<<P<<endl;
    cout<<endl;
    cout<<"    Find Element = M"<<endl;
    P = findElement(L, 'M');
    cout<<"    The info(P) should be   : M "<<endl;
    cout<<"    Your info(P)            : "<<info(P)<<endl;
    cout<<"    The address P should be : "<<prev(last(L))<<endl;
    cout<<"    Your address P          : "<<P<<endl;
    cout<<endl;
    cout<<"    Find Element = X"<<endl;
    P = findElement(L, 'X');
    cout<<"    The address P should be : 0"<<endl;
    cout<<"    Your address P          : "<<P<<endl;
    cout<<endl;
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;

    cout<<"4. Test the procedure insertAfter(List &L, address Prec, address P)"<<endl;
    cout<<"    ** You might get an error at this point **"<<endl;
    cout<<"    ** think hard why it happened, then ask your TAs **"<<endl<<endl;
    cout<<"    Initial List: "; printInfo(L);
    cout<<endl;
    cout<<"    Find Element = L"<<endl;
    Prec = findElement(L, 'L');
    cout<<"    Info(Prec) should be : L"<<endl;
    cout<<"    Your Info(Prec)      : "<<info(Prec)<<endl;
    cout<<"    Insert After Prec with info = E"<<endl;
    insertAfter(L, Prec, allocate('E'));
    cout<<"    The list should be   : S, I, M, L, E, "<<endl;
    cout<<"    Your list            : "; printInfo(L);
    cout<<endl;
    cout<<"    Find Element = M"<<endl;
    Prec = findElement(L, 'M');
    cout<<"    Info(Prec) should be : M"<<endl;
    cout<<"    Your Info(Prec)      : "<<info(Prec)<<endl;
    cout<<"    Insert After Prec with info = P"<<endl;
    insertAfter(L, Prec, allocate('P'));
    cout<<"    The list should be   : S, I, M, P, L, E, "<<endl;
    cout<<"    Your list            : "; printInfo(L);
    cout<<endl;
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;


    cout<<"4. Test the procedure insertAfter(List &L, address Prec, address P) [Cont'd]"<<endl;
    cout<<"    Initial List: "; printInfo(L);
    cout<<endl;
    cout<<"    Find Element = O"<<endl;
    Prec = findElement(L, 'O');
    cout<<"    Prec should be     : 0"<<endl;
    cout<<"    Your Prec          : "<<Prec<<endl;
    cout<<"    Insert After Prec with info = H"<<endl;
    insertAfter(L, Prec, allocate('H'));
    cout<<"    The list should be : S, I, M, P, L, E, "<<endl;
    cout<<"    Your list          : "; printInfo(L);
    cout<<endl;
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;

    cout<<"5. Test the procedure deleteLast(List &L, address &P)"<<endl;
    cout<<"    ** You might get an error at this point **"<<endl;
    cout<<"    ** think hard why it happened, then ask your TAs **"<<endl<<endl;
    cout<<"    Initial List: "; printInfo(L);
    cout<<endl;
    cout<<"    Delete Last"<<endl; deleteLast(L, P);
    cout<<"    Info(P) should be  : E"<<endl;
    cout<<"    Your Info(P)       : "<<info(P)<<endl;
    cout<<"    The list should be : S, I, M, P, L, "<<endl;
    cout<<"    Your list          : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;

    cout<<"6. Test the procedure deleteAfter(List &L, address Prec, address &P)"<<endl;
    cout<<"    ** You might get an error at this point **"<<endl;
    cout<<"    ** think hard why it happened, then ask your TAs **"<<endl<<endl;
    cout<<"    Initial List: "; printInfo(L);
    cout<<endl;
    cout<<"    Find Element = I"<<endl;Prec = findElement(L, 'I');
    cout<<"    Info(Prec) should be  : I"<<endl;
    cout<<"    Your Info(Prec)       : "<<info(Prec)<<endl;
    cout<<"    Delete After"<<endl;deleteAfter(L, Prec, P);
    cout<<"    Info(P) should be     : M"<<endl;
    cout<<"    Your Info(P)          : "<<info(P)<<endl;
    cout<<"    The list should be    : S, I, P, L, "<<endl;
    cout<<"    Your list             : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    Find Element = P"<<endl;Prec = findElement(L, 'P');
    cout<<"    Info(Prec) should be  : P"<<endl;
    cout<<"    Your Info(Prec)       : "<<info(Prec)<<endl;
    cout<<"    Delete After"<<endl;deleteAfter(L, Prec, P);
    cout<<"    Info(P) should be     : L"<<endl;
    cout<<"    Your Info(P)          : "<<info(P)<<endl;
    cout<<"    The list should be    : S, I, P, "<<endl;
    cout<<"    Your list             : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;

    cout<<"6. Test the procedure deleteAfter(List &L, address Prec, address &P) [Cont'd]"<<endl;
    cout<<"    Initial List: "; printInfo(L);
    cout<<endl;
    cout<<"    Find Element = P"<<endl;Prec = findElement(L, 'P');
    cout<<"    Info(Prec) should be  : P"<<endl;
    cout<<"    Your Info(Prec)       : "<<info(Prec)<<endl;
    cout<<"    Delete After"<<endl;deleteAfter(L, Prec, P);
    cout<<"    The list should be    : S, I, P, "<<endl;
    cout<<"    Your list             : "; printInfo(L);
    cout<<endl;
    cout<<"    Find Element = A"<<endl;Prec = findElement(L, 'A');
    cout<<"    Prec should be        : 0"<<endl;
    cout<<"    Your Prec             : "<<Prec<<endl;
    cout<<"    Delete After"<<endl;deleteAfter(L, Prec, P);
    cout<<"    The list should be    : S, I, P, "<<endl;
    cout<<"    Your list             : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    Find Element = S"<<endl;Prec = findElement(L, 'S');
    cout<<"    Prec should be        : S"<<endl;
    cout<<"    Your Prec             : "<<info(Prec)<<endl;
    cout<<"    Delete After"<<endl;deleteAfter(L, Prec, P);
    cout<<"    Info(P) should be     : I"<<endl;
    cout<<"    Your Info(P)          : "<<info(P)<<endl;
    cout<<"    The list should be    : S, P, "<<endl;
    cout<<"    Your list             : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;

    cout<<"5. Test the procedure deleteLast(List &L, address &P) [Cont'd]"<<endl;
    cout<<"    Initial List: "; printInfo(L);
    cout<<endl;
    cout<<"    Delete Last"<<endl; deleteLast(L, P);
    cout<<"    Info(P) should be  : P"<<endl;
    cout<<"    Your Info(P)       : "<<info(P)<<endl;
    cout<<"    The list should be : S, "<<endl;
    cout<<"    Your list          : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    Delete Last"<<endl; deleteLast(L, P);
    cout<<"    Info(P) should be  : S"<<endl;
    cout<<"    Your Info(P)       : "<<info(P)<<endl;
    cout<<"    The list should be : [empty] "<<endl;
    cout<<"    Your list          : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    Delete Last"<<endl; deleteLast(L, P);
    cout<<"    The list should be : [empty] "<<endl;
    cout<<"    Your list          : "; printInfo(L);
    cout<<endl;
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;

    cout<<endl;
    cout<<"BONUS: Find Biggest"<<endl;
    cout<<"examine the provided findBiggest procedure, and observe the result below"<<endl;
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
    cout<<"    Initial List L1  : "; printInfo(L);
    cout<<"    Initial List L2  : "; printInfo(L1);
    cout<<"    Perform Find Biggest"<<endl;
    cout<<"    Found : ";findBiggest(L, L1);
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;

    cout<<"BONUS: Insertion Sort"<<endl;
    cout<<"examine the provided insertionSort procedure, and observe the result below"<<endl;
    cout<<"    Initial List: "; printInfo(L);
    cout<<"    Perform Insertion Sort"<<endl;
    insertionSort(L);
    cout<<"    Sorted List : "; printInfo(L);
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;

    cout<<"Reverse Half"<<endl;
    cout<<"examine the provided reverseHalf procedure, and observe the result below"<<endl;
    cout<<"    Initial List  : "; printInfo(L);
    cout<<"    Perform Reverse Half"<<endl;
    reverseHalf(L);
    cout<<"    Reversed List : "; printInfo(L);
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;

    return 0;
}
