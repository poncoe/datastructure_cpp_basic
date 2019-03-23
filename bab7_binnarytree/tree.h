#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include<iostream>
#include<stdlib.h>
#define Nil NULL
#define id(a) (a)->id
#define left(a) (a)->left
#define right(a) (a)->right

using namespace std;

typedef struct node *adrnode;

struct node{
    int id;
    adrnode left;
    adrnode right;
};

typedef adrnode tree;

tree alokasinode(int id);

int nLeaves(tree T);
int nVertex(tree root);
adrnode depthFirstSearch(tree T, int X);
int height(tree T);
bool balanced(tree T);

#endif // TREE_H_INCLUDED
