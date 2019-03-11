#include "BINARYTREE.h"

int main(){

    /** Lengkapi biodata anda disini */
    char name[] = "Hilman";
    int Nim[10] = {1,3,0,1,1,7,4,6,9,0}; // ubah dengan NIM Anda
    char Kelas[] = "IFIK-41-01";


    cout << " Modul 9: BINARY SEARCH TREE " << endl;
    cout << " ---------------------------------------------- " << endl;
    cout << " Nama  : "<<name<<endl;
    cout << " NIM   : ";for(int i=0;i<10;i++){cout<<Nim[i];}cout<<endl;
    cout << " Kelas : "<<Kelas<<endl;
    cout << " ---------------------------------------------- " << endl;
    cout << " Ayo berlatih!";
    cin.get();

    address BST;
    address p;
    createBST(BST);

        int data[] = {7,4,11,2,5,4,1,3,6,9,7,2,4,8,12,10,100,4};

        cout<<"\n Array : ";
        int lenData = sizeof(data)/sizeof(data[0]);
        for(int i=0;i<lenData;i++){
            cout<<data[i]<<" - ";
            p = allocation(data[i]);
            insertBST(BST,p);
        }
        cout<<endl<<endl;

        cout<<" Traversals of Tree : "<<endl;
        cout<<" \tPreorder : "<<endl;
        cout<<" \t Correct answer : 7 - 4 - 2 - 1 - 3 - 5 - 6 - 11 - 9 - 8 - 10 - 12 - 100 -"<<endl;
        cout<<" \t Your answer \t: ";
        preOrder(BST);
        cout<<endl<<endl;

        cout<<" \tPostorder : "<<endl;
        cout<<" \t Correct answer : 1 - 3 - 2 - 6 - 5 - 4 - 8 - 10 - 9 - 100 - 12 - 11 - 7 - "<<endl;
        cout<<" \t Your answer \t: ";
        postOrder(BST);
        cout<<endl;
        cin.get();

        cout<<" \n Attribute of TREE : "<<endl;
        cout<<" \tDepth "<<endl;
        cout<<" \t Correct answer : 3"<<endl;
        int depth = countDepth(BST)-1;
        if (depth<0){ depth = 0;}
        cout<<" \t Your answer\t: "<<depth<<endl<<endl;

        cout<<" \tLeaves "<<endl;
        cout<<" \t Correct answer : 1 - 3 - 6 - 8 - 10 - 100 -"<<endl;
        cout<<" \t Your answer \t: "; printLeaves(BST);
        cout<<endl<<endl;

        cout<<" \tNode of Tree "<<endl;
        cout<<" \t Correct answer : 13"<<endl;
        cout<<" \t Your answer\t: "<<countNode(BST)<<endl<<endl;

        cin.get();

        address foundNode;
        cout<<" Searching : "<<endl;
        cout<<" \tSearched value \t: 0"<<endl;
        foundNode = findNode(BST,0);
        cout<<" \t Correct answer : Node is not found "<<endl;
        cout<<" \t Your answer\t:";
        if(foundNode){ cout<<" Node is found "<<endl; }else{ cout<<" Node is not found "<<endl;}

        cout<<"\n \tSearched value \t: 4"<<endl;
        foundNode = findNode(BST,4);
        cout<<" \t Correct answer : Node is found "<<endl;
        cout<<" \t Your answer\t:";
        if(foundNode){ cout<<" Node is found "<<endl; }else{ cout<<" Node is not found "<<endl;}

        cout<<"\n \tSearched value \t: 10"<<endl;
        foundNode = findNode(BST,10);
        cout<<" \t Correct answer : Node is found "<<endl;
        cout<<" \t Your answer\t:";
        if(foundNode){ cout<<" Node is found "<<endl; }else{ cout<<" Node is not found "<<endl;}

        cout<<"\n \tSearched value \t: 20"<<endl;
        foundNode = findNode(BST,20);
        cout<<" \t Correct answer : Node is not found "<<endl;
        cout<<" \t Your answer\t:";
        if(foundNode){ cout<<" Node is found "<<endl; }else{ cout<<" Node is not found "<<endl;}

        cout<<"\n \tSearched value \t: 100"<<endl;
        foundNode = findNode(BST,100);
        cout<<" \t Correct answer : Node is found "<<endl;
        cout<<" \t Your answer\t:";
        if(foundNode){ cout<<" Node is found "<<endl; }else{ cout<<" Node is not found "<<endl;}

        cin.get();
        cout<<"\n Ancestor [BONUS] : "<<endl;
        cout<<" \tAncestor of 10 "<<endl;
        bool status;
        foundNode = findNode(BST,10);
        cout<<" \t Correct answer : 9 - 11 - 7 - "<<endl;
        cout<<" \t Your answer\t: ";
        if(foundNode){ printAncestor(BST,foundNode,status);}
        cout<<endl<<endl;

        cout<<" \tAncestor of 6 "<<endl;
        foundNode = findNode(BST,6);
        cout<<" \t Correct answer : 5 - 4 - 7 - "<<endl;
        cout<<" \t Your answer\t: ";
        if(foundNode){ printAncestor(BST,foundNode,status);}
        cout<<endl<<endl;

        cout<<" \tAncestor of 7 "<<endl;
        foundNode = findNode(BST,7);
        cout<<" \t Correct answer : "<<endl;
        cout<<" \t Your answer\t: ";
        if(foundNode){ printAncestor(BST,foundNode,status);}
        cout<<endl<<endl;

        cout<<" \tAncestor of 15 "<<endl;
        foundNode = findNode(BST,15);
        cout<<" \t Correct answer : "<<endl;
        cout<<" \t Your answer\t: ";
        if(foundNode){ printAncestor(BST,foundNode,status);}
        cout<<endl<<endl;


        cin.get();
        createBST(BST);
        cout<<"\n Your NIM : ";
        lenData = sizeof(Nim)/sizeof(Nim[0]);
        for(int i=0;i<lenData;i++){
            cout<<Nim[i]<<" - ";
            p = allocation(Nim[i]);
            insertBST(BST,p);
        }
        cout<<endl<<endl;

        cout<<" Traversals of Tree : "<<endl;
        cout<<" \tPreorder : : ";
        preOrder(BST);
        cout<<endl;

        cout<<" \tPostorder : ";
        postOrder(BST);
        cout<<endl;

        cout<<"\n Attribute of TREE : "<<endl;
        depth = countDepth(BST)-1;
        if (depth<0){ depth = 0;}
        cout<<" \tDepth \t: "<<depth<<endl;

        cout<<" \tLeaves \t: "; printLeaves(BST);
        cout<<endl;
        cout<<" \tNumber of Nodes : "<<countNode(BST)<<endl;

        cin.get();

        foundNode;
        cout<<"\n Searching : "<<endl;
        cout<<" \tSearched value \t: 1"<<endl;
        foundNode = findNode(BST,1);
        cout<<" \t Your answer\t:";
        if(foundNode){ cout<<" Node is found "<<endl; }else{ cout<<" Node is not found "<<endl;}

        cout<<" \tSearched value \t: 4"<<endl;
        foundNode = findNode(BST,4);
        cout<<" \t Your answer\t:";
        if(foundNode){ cout<<" Node is found "<<endl; }else{ cout<<" Node is not found "<<endl;}

        cout<<" \tSearched value \t: 7"<<endl;
        foundNode = findNode(BST,7);
        cout<<" \t Your answer\t:";
        if(foundNode){ cout<<" Node is found "<<endl; }else{ cout<<" Node is not found "<<endl;}

        cout<<" \tSearched value \t: -5"<<endl;
        foundNode = findNode(BST,-5);
        cout<<" \t Your answer\t:";
        if(foundNode){ cout<<" Node is found "<<endl; }else{ cout<<" Node is not found "<<endl;}

        cout<<" \tSearched value \t: 2"<<endl;
        foundNode = findNode(BST,2);
        cout<<" \t Your answer\t:";
        if(foundNode){ cout<<" Node is found "<<endl; }else{ cout<<" Node is not found "<<endl;}


        cin.get();
        cout<<"\n Ancestor [BONUS] : "<<endl;

        foundNode = findNode(BST,1);
        cout<<" \tAncestor of 1 : ";
        if(foundNode){ printAncestor(BST,foundNode,status);}
        cout<<endl;

        foundNode = findNode(BST,4);
        cout<<" \tAncestor of 4 : ";
        if(foundNode){ printAncestor(BST,foundNode,status);}
        cout<<endl;

        foundNode = findNode(BST,7);
        cout<<" \tAncestor of 7 : ";
        if(foundNode){ printAncestor(BST,foundNode,status);}
        cout<<endl;

        foundNode = findNode(BST,9);
        cout<<" \tAncestor of 9 : ";
        if(foundNode){ printAncestor(BST,foundNode,status);}
        cout<<endl;

    return 0;
}
