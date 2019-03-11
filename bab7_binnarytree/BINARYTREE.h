#ifndef BINARYTREE_H_INCLUDED
#define BINARYTREE_H_INCLUDED

#include <iostream>
using namespace std;

#define info(A) A->info
#define left(A) A->left
#define right(A) A->right
#define NIL NULL

/**
    type infotype : integer
    type address : pointer to Node
    type Node <
        info : infotype,
        left : address,
        right: address
    >
*/
typedef int infotype;
typedef struct Node* address;

typedef struct Node {
    infotype info;
    address left;
    address right;
};

/**  IS. -
 *   FS. root dari Tree menunjuk ke NIL */
void createBST(address &root);

/**  Mengembalikan Node yang memiliki Info sama dengan X */
address allocation(infotype X);

/**  IS. terdefinisi suatu root dari Tree (mungkin kosong) dan sebuah Node
 *   FS. Node masukkan secara BST (Binary Search Tree) kedalam Tree
     Asumsi. node yang sama infonya tidak dimasukkan kedalam TREE
     BST: info left < info root < info right */
void insertBST(address &root, address node);

/**  IS. terdefinisi root dari Tree
 *   FS. menampilkan Node child secara preOrder (root >> left child >> right child) */
void preOrder(address root);

/**  IS. terdefinisi root dari Tree
 *   FS. menampilkan Node child secara postOrder (left child >> right child >> root) */
void postOrder(address root);

/**  mengembalikan address dari root/node apabila info dari node sama dengan X, dan NIL apabila sebaliknya
 *   hint. Pencarian didalam BST, info left < info root < info right */
address findNode(address root, infotype X);

/**  mengembalikan kedalaman dari Tree keseluruhan*/
int countDepth(address root);

/**  IS. terdefinisi root dari Tree
 *   FS. Menampilkan info node yang merupakan daun (atau node yang tidak memiliki child)*/
void printLeaves(address root);

/**  mengembalikan jumlah Nodes yang terdapat pada Tree */
int countNode(address root);

/**  [BONUS] */
/**  IS. terdefinisi root suatu Tree dan suatu node yang ada didalam tree
 *   FS. found berisi True jika node ditemukan, dan menampilkan semua leluhur dari node tersebut */
void printAncestor(address root, address node, bool &found);

#endif // BINARYTREE_H_INCLUDED
