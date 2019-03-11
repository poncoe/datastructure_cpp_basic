#include "graph.h"

adrVertex createVertex(int X){
    adrVertex p = new elmVertex;

    infoVertex(p) = X;
    firstEdge(p) = nil;
    nextVertex(p) = nil;

    return p;
}

Graph createGraph(){
    Graph G;
    firstDest(G) = nil;
    firstSource(G) = nil;

    adrVertex V;
    //create Vertex asal 1,10,17,21
    V = createVertex(17);
    nextVertex(V)=firstSource(G);
    firstSource(G) = V;
    V = createVertex(10);
    nextVertex(V)=firstSource(G);
    firstSource(G) = V;
    V = createVertex(1);
    nextVertex(V)=firstSource(G);
    firstSource(G) = V;

    //create vertex tujuan 1,10,17
    V = createVertex(21);
    nextVertex(V)=firstDest(G);
    firstDest(G) = V;
    V = createVertex(17);
    nextVertex(V)=firstDest(G);
    firstDest(G) = V;
    V = createVertex(10);
    nextVertex(V)=firstDest(G);
    firstDest(G) = V;
    V = createVertex(1);
    nextVertex(V)=firstDest(G);
    firstDest(G) = V;

    return G;
}

adrEdge createEdge(int source, int destination){

    adrEdge E = new elmEdge;

    infoSource(E) = source;
    infoDest(E) = destination;
    sNextEdge(E) = nil;
    dNextEdge(E) = nil;

    return E;
}

adrVertex sourceVertex(Graph G, int X){

    adrVertex V = firstSource(G);
    while(V!=nil){
        if(infoVertex(V)==X){
            return V;
        }else{
            V = nextVertex(V);
        }
    }
    return nil;
}

adrVertex destinationVertex(Graph G, int X){

    adrVertex V = firstDest(G);
    while(V!=nil){
        if(infoVertex(V)== X){
            return V;
        }
        else{
            V = nextVertex(V);
        }
    }
    return nil;
}

void addEdge(Graph &G, int source, int destination){

    adrVertex S,D;
    S = sourceVertex(G,source);
    D = destinationVertex(G,destination);
    if((S!=nil)&&(D!=nil)){
        adrEdge E = createEdge(source,destination);
        sNextEdge(E) = firstEdge(S);
        firstEdge(S) = E;
        dNextEdge(E) = firstEdge(D);
        firstEdge(D) = E;
        cout<<infoSource(E)<<"-"<<infoDest(E)<<endl;
    } else{
        cout<<"Vertex tidak ditemukan"<<endl;
    }
}

void showAllEdges(Graph G){
    adrVertex S = firstSource(G);
    while (S != NULL) {
        adrEdge E = firstEdge(S);
        while (E != NULL) {
            cout << infoSource(E) << "\t" << infoDest(E) << endl;
            E = sNextEdge(E);
        }
        S = nextVertex(S);
    }
}

int outDegree (Graph G, int X){
    adrVertex V = sourceVertex(G, X);
    int i = 0;
    if (V != NULL) {
        adrEdge E = firstEdge(V);
        while (E != NULL) {
            i = i + 1;
            E = sNextEdge(E);
        }
    }
    return i;
}

int inDegree (Graph G, int X){
    adrVertex V = destinationVertex(G, X);
    int i = 0;
    if (V != NULL) {
        adrEdge E = firstEdge(V);
        while (E != NULL) {
            i = i + 1;
            E = dNextEdge(E);
        }
    }
    return i;
}

int degree(Graph G, int X){
    return inDegree(G,X) + outDegree(G,X);
}

bool linked(Graph G, int v1, int v2){
    adrVertex S = sourceVertex(G, v1);
    adrVertex D = destinationVertex(G, v2);

    if (S != NULL && D != NULL) {
        return true;
    } else {
        return false;
    }
}
