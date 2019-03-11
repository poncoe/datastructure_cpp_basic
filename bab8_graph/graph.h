#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED

#include <iostream>
#include <stdlib.h>

#define infoVertex(V) V->infoVertex
#define firstEdge(V) V->firstEdge
#define nextVertex(V) V->nextVertex
#define infoSource(E) E->infoSource
#define infoDest(E) E->infoDest
#define sNextEdge(E) E->sNextEdge
#define dNextEdge(E) E->dNextEdge
#define firstSource(G) G.firstSource
#define firstDest(G) G.firstDest
#define nil NULL

using namespace std;

typedef struct elmVertex *adrVertex;
typedef struct elmEdge *adrEdge;

struct elmVertex{
    int infoVertex;
    adrEdge firstEdge;
    adrVertex nextVertex;
};

struct elmEdge{
    int infoSource;
    int infoDest;
    adrEdge sNextEdge;
    adrEdge dNextEdge;
};

struct Graph{
    adrVertex firstSource;
    adrVertex firstDest;
};

adrVertex createVertex(int X);
Graph createGraph();
adrEdge createEdge(int source, int destination);
adrVertex sourceVertex(Graph G,int X);
adrVertex destinationVertex(Graph G,int X);
void addEdge(Graph &G, int source, int destination);
void showAllEdges(Graph G);
int outDegree (Graph G, int X);
int inDegree (Graph G, int X);
int degree(Graph G, int X);
bool linked(Graph G, int v1, int v2);

#endif // GRAPH_H_INCLUDED
