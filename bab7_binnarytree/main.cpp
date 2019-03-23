#include"tree.cpp"


int main()
{
    tree a;
    a = alokasinode(13);

    left(a) = alokasinode(14);
    left(left(a)) = alokasinode(39);
    left(left(left(a))) = alokasinode(31);
    right(left(left(a))) = alokasinode(50);
    right(left(a)) = alokasinode(28);
    left(right(left(a))) = alokasinode(14);
    right(a) = alokasinode(2);
    left(right(a)) = alokasinode(18);
    right(right(a)) = alokasinode(19);
    left(right(right(a))) = alokasinode(15);
    right(left(right(right(a)))) = alokasinode(41);
    right(right(right(a))) = alokasinode(21);

    cout<<"Banyak Vertex : "<<nVertex(a);
    cout<<endl;

    cout<<"Banyak Daun   : "<<nLeaves(a);
    cout<<endl;

    cout<<"Harusnya      : "<<id(depthFirstSearch(a, 13))<<endl;
    cout<<"Harusnya      : "<<id(depthFirstSearch(a, 14))<<endl;
    cout<<"Harusnya      : "<<id(depthFirstSearch(a, 39))<<endl;
    cout<<"Harusnya      : "<<id(depthFirstSearch(a, 31))<<endl;
    cout<<"Harusnya      : "<<id(depthFirstSearch(a, 50))<<endl;
    cout<<"Harusnya      : "<<id(depthFirstSearch(a, 28))<<endl;
    cout<<"Harusnya      : "<<id(depthFirstSearch(a, 14))<<endl;
    cout<<"Harusnya      : "<<id(depthFirstSearch(a, 2))<<endl;
    cout<<"Harusnya      : "<<id(depthFirstSearch(a, 18))<<endl;
    cout<<"Harusnya      : "<<id(depthFirstSearch(a, 19))<<endl;
    cout<<"Harusnya      : "<<id(depthFirstSearch(a, 15))<<endl;
    cout<<"Harusnya      : "<<id(depthFirstSearch(a, 21))<<endl;
    cout<<"Harusnya      : "<<id(depthFirstSearch(a, 41))<<endl;
    cout<<"Harusnya      : "<<depthFirstSearch(a, 12)<<endl;
    cout<<"Harusnya      : "<<depthFirstSearch(NULL, 12)<<endl;

    cout<<"Harusnya : "<<height(a)-1<<endl;
    cout<<"Harusnya true(1) : "<<balanced(a)<<endl;


    return 0;
}
