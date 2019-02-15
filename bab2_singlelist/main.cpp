#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    List L;
    address P, Q;
    infotype X, Y;
    cout<<endl;

    cout<<"1a. Test the given project: Allocation and Deallocation"<<endl;
    X = 10;
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
    cout<<"    Insert First info = 5"<<endl;
    insertFirst(L, allocate(5));
    cout<<"    The list should be : 5, "<<endl;
    cout<<"    Your list          : "; printInfo(L);
    cout<<endl;
    cout<<"    Insert First info = 8"<<endl;
    insertFirst(L, allocate(8));
    cout<<"    The list should be : 8, 5, "<<endl;
    cout<<"    Your list          : "; printInfo(L);
    cout<<endl;
    cout<<"    Insert First info = 0"<<endl;
    insertFirst(L, allocate(0));
    cout<<"    The list should be : 0, 8, 5, "<<endl;
    cout<<"    Your list          : "; printInfo(L);
    cout<<endl;
    cout<<"    Insert First info = 3"<<endl;
    insertFirst(L, allocate(3));
    cout<<"    The list should be : 3, 0, 8, 5, "<<endl;
    cout<<"    Your list          : "; printInfo(L);
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;


    cout<<"3. Test the procedure deleteFirst(List &L, address &P)"<<endl;
    cout<<"    ** You might get an error at this point **"<<endl;
    cout<<"    ** think hard why it happened, then ask your TAs **"<<endl<<endl;
    cout<<"    Initial List: "; printInfo(L);
    cout<<endl;
    cout<<"    Delete First"<<endl; deleteFirst(L, P);
    cout<<"    Info(P) should be    : 3"<<endl;
    cout<<"    Your Info(P)         : "<<info(P)<<endl;
    cout<<"    The list should be   : 0, 8, 5, "<<endl;
    cout<<"    Your list            : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    Delete First"<<endl; deleteFirst(L, P);
    cout<<"    Info(P) should be    : 0"<<endl;
    cout<<"    Your Info(P)         : "<<info(P)<<endl;
    cout<<"    The list should be   : 8, 5, "<<endl;
    cout<<"    Your list            : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;


    cout<<"3. Test the procedure deleteFirst(List &L, address &P) [Cont'd]"<<endl;
    cout<<"    Initial List: "; printInfo(L);
    cout<<endl;
    cout<<"    Delete First"<<endl; deleteFirst(L, P);
    cout<<"    Info(P) should be    : 8"<<endl;
    cout<<"    Your Info(P)         : "<<info(P)<<endl;
    cout<<"    The list should be   : 5, "<<endl;
    cout<<"    Your list            : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    Delete First"<<endl; deleteFirst(L, P);
    cout<<"    Info(P) should be    : 5"<<endl;
    cout<<"    Your Info(P)         : "<<info(P)<<endl;
    cout<<"    The list should be   : [empty] "<<endl;
    cout<<"    Your list            : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    Delete First"<<endl;
    cout<<"    your procedure should check if the list is already empty"<<endl;
    deleteFirst(L, P);
    cout<<"    address P should be  : 0 (NULL)"<<endl;
    cout<<"    Your address P       : "<<P<<endl;
    cout<<"    The list should be   : [empty] "<<endl;
    cout<<"    Your list            : "; printInfo(L);
    cout<<endl;
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;


    cout<<"4. Test the procedure insertLast(List &L, address P)"<<endl;
    cout<<"    ** You might get an error at this point **"<<endl;
    cout<<"    ** think hard why it happened, then ask your TAs **"<<endl<<endl;
    createList(L);
    cout<<"    Initial List is [empty]: "; printInfo(L);
    cout<<endl;
    cout<<"    Insert Last info = 5"<<endl;
    cout<<"    your procedure should check if the list is currently empty"<<endl;
    insertLast(L, allocate(5));
    cout<<"    The list should be : 5, "<<endl;
    cout<<"    Your list          : "; printInfo(L);
    cout<<endl;
    cout<<"    Insert Last info = 8"<<endl;
    insertLast(L, allocate(8));
    cout<<"    The list should be : 5, 8, "<<endl;
    cout<<"    Your list          : "; printInfo(L);
    cout<<endl;
    cout<<"    Insert Last info = 0"<<endl;
    insertLast(L, allocate(0));
    cout<<"    The list should be : 5, 8, 0, "<<endl;
    cout<<"    Your list          : "; printInfo(L);
    cout<<endl;
    cout<<"    Insert Last info = 3"<<endl;
    insertLast(L, allocate(3));
    cout<<"    The list should be : 5, 8, 0, 3, "<<endl;
    cout<<"    Your list          : "; printInfo(L);
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;


    cout<<"5. Test the procedure deleteLast(List &L, address &P)"<<endl;
    cout<<"    Initial List: "; printInfo(L);
    cout<<endl;
    cout<<"    Delete Last"<<endl; deleteLast(L, P);
    cout<<"    Info(P) should be    : 3"<<endl;
    cout<<"    Your Info(P)         : "<<info(P)<<endl;
    cout<<"    The list should be   : 5, 8, 0, "<<endl;
    cout<<"    Your list            : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    Delete Last"<<endl; deleteLast(L, P);
    cout<<"    Info(P) should be    : 0"<<endl;
    cout<<"    Your Info(P)         : "<<info(P)<<endl;
    cout<<"    The list should be   : 5, 8, "<<endl;
    cout<<"    Your list            : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;


    cout<<"5. Test the procedure deleteLast(List &L, address &P) [Cont'd]"<<endl;
    cout<<"    Initial List: "; printInfo(L);
    cout<<endl;
    cout<<"    Delete Last"<<endl; deleteLast(L, P);
    cout<<"    Info(P) should be    : 8"<<endl;
    cout<<"    Your Info(P)         : "<<info(P)<<endl;
    cout<<"    The list should be   : 5, "<<endl;
    cout<<"    Your list            : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    Delete Last"<<endl; deleteLast(L, P);
    cout<<"    Info(P) should be    : 5"<<endl;
    cout<<"    Your Info(P)         : "<<info(P)<<endl;
    cout<<"    The list should be   : [empty] "<<endl;
    cout<<"    Your list            : "; printInfo(L);
    deallocate(P);
    cout<<endl;
    cout<<"    Delete Last"<<endl;
    cout<<"    your procedure should check if the list is already empty"<<endl;
    deleteLast(L, P);
    cout<<"    address P should be  : 0 (NULL)"<<endl;
    cout<<"    Your address P       : "<<P<<endl;
    cout<<"    The list should be   : [empty] "<<endl;
    cout<<"    Your list            : "; printInfo(L);
    cout<<endl;
    cout<<"    [press enter to continue]"<<endl;
    cin.get();system("cls");
    cout<<endl;


    cout<<endl;
    cout<<"BONUS: Reverse List"<<endl;
    cout<<"examine the provided reverseList procedure, and observe the result below"<<endl;
    createList(L);
    insertFirst(L,allocate(3));
    insertFirst(L,allocate(6));
    insertFirst(L,allocate(8));
    insertFirst(L,allocate(2));
    insertFirst(L,allocate(9));
    cout<<"before reverse : ";printInfo(L);
    reverseList(L);
    cout<<"after reverse  : ";printInfo(L);

    cout<<""<<endl;
    return 0;
}

