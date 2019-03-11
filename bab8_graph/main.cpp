#include "graph.h"

using namespace std;

int main()
{

    Graph G = createGraph();

    addEdge(G,17,21);
    addEdge(G,17,1);
    addEdge(G,10,17);
    addEdge(G,10,1);
    addEdge(G,1,21);
    addEdge(G,1,10);
    cout<<"\n";
    cout<<"1. Mencetak semua edge(busur) pada graph \n";
    cout<<"Output seharusnya: \n";
    cout<<"1 \t | 10"<<endl<<"1 \t | 21"<<endl<<"10 \t | 1"<<endl<<"10 \t | 17"<<endl<<"17 \t | 1"<<endl<<"17 \t | 21 \n";
    cout<<"Output anda: \n";
    showAllEdges(G);
    cout<<"\n";
    system("PAUSE");
    system("cls");

    cout<<"2. Menghitung out-degree dari sebuah vertex \n\n";
    cout<<"outDegree(1)  [Seharusnya]: 2 \n";
    cout<<"outDegree(1)  [Anda]      : "<< outDegree(G,1)<<endl;
    cout<<"outDegree(10) [Seharusnya]: 2 \n";
    cout<<"outDegree(10) [Anda]      : "<< outDegree(G,10)<<endl;
    cout<<"outDegree(17) [Seharusnya]: 2 \n";
    cout<<"outDegree(17) [Anda]      : "<< outDegree(G,17)<<endl;
    cout<<"\n";
    system("PAUSE");
    system("cls");

    cout<<"3. Menghitung in-degree dari sebuah vertex \n \n";
    cout<<"inDegree(1)  [Seharusnya]: 2 \n";
    cout<<"inDegree(1)  [Anda]      : "<< inDegree(G,1)<<endl;
    cout<<"inDegree(10) [Seharusnya]: 1 \n";
    cout<<"inDegree(10) [Anda]      : "<< inDegree(G,10)<<endl;
    cout<<"inDegree(17) [Seharusnya]: 1 \n";
    cout<<"inDegree(17) [Anda]      : "<< inDegree(G,17)<<endl;
    cout<<"inDegree(21) [Seharusnya]: 2 \n";
    cout<<"inDegree(21) [Anda]      : "<< inDegree(G,21)<<endl;
    cout<<"\n";
    system("PAUSE");
    system("cls");

    cout<<"4. Menghitung derajat(degree) dari sebuah vertex \n \n";
    cout<<"Degree(1)  [Seharusnya]: 4 \n";
    cout<<"Degree(1)  [Anda]      : "<< degree(G,1)<<endl;
    cout<<"Degree(10) [Seharusnya]: 3 \n";
    cout<<"Degree(10) [Anda]      : "<< degree(G, 10)<<endl;
    cout<<"Degree(17) [Seharusnya]: 3 \n";
    cout<<"Degree(17) [Anda]      : "<< degree(G, 17)<<endl;
    cout<<"Degree(21) [Seharusnya]: 2 \n";
    cout<<"Degree(21) [Anda]      : "<< degree(G, 21)<<endl;
    cout<<"\n";
    system("PAUSE");
    system("cls");

    cout<<"5. Mengecek apakah ada edge dari v1 ke v2 \n \n";
    cout<<"linked(17,1) [Seharusnya]: 1 \n";
    cout<<"linked(17,1) [Anda]      : "<<linked(G,17,1)<<endl;
    cout<<"\n";
    system("PAUSE");
    system("cls");
}
