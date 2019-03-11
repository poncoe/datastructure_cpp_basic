#include "BINARYTREE.h"

/**  IS. -
 *   FS. root dari Tree menunjuk ke NIL */
void createBST(address &root){
    root = NIL;
}

/**  Mengembalikan Node yang memiliki Info sama dengan X */
address allocation(infotype X){
    address N;
    N=new Node;
    left(N)=NULL;
    right(N)=NULL;
    info(N)=X;
    return N;
}

/**  IS. terdefinisi suatu root dari Tree (mungkin kosong) dan sebuah Node
 *   FS. Node masukkan secara BST (Binary Search Tree) kedalam Tree
     Hint. node yang sama infonya tidak dimasukkan kedalam TREE
     BST. info left < info root < info right */
void insertBST(address &root, address node){
    if (root==NULL){
        root=node;
    }
    else{
        if(info(root)>info(node)){
            insertBST(left(root), node);
        }
        else if(info(root)<info(node)){
            insertBST(right(root), node);
        }
    }
}

/**  IS. terdefinisi root dari Tree
 *   FS. menampilkan Node child secara preOrder (root >> left child >> right child) */
void preOrder(address root){
    if (root!=NULL){
        cout<<info(root)<<" - ";
        preOrder(left(root));
        preOrder(right(root));
    }
}

/**  IS. terdefinisi root dari Tree
 *   FS. menampilkan Node child secara postOrder (left child >> right child >> root) */
void postOrder(address root){
    if (root!=NULL){
        postOrder(left(root));
        postOrder(right(root));
        cout<<info(root)<<" - ";
    }
}

/**  mengembalikan address dari root/node apabila info dari node sama dengan X, dan NIL apabila sebaliknya
 *   hint. Pencarian didalam BST, info left < info root < info right */
address findNode(address root, infotype X){
    if(root==NULL or info(root)==X){
        return root;
    }
    else{
        if(X<info(root)){
            findNode(left(root), X);
        }
        else if (X>info(root)){
            findNode(right(root), X);
        }
    }
}

/**  mengembalikan kedalaman dari Tree keseluruhan*/
int countDepth(address root){
    int lef, rig;
    if (root==NULL){
        return 0;
    }
    else{
        lef=countDepth(left(root))+1;
        rig=countDepth(right(root))+1;
    }
    if (lef<rig){
        return rig;
    }
    else{
        return lef;
    }
}

/**  IS. terdefinisi root dari Tree
 *   FS. Menampilkan info node yang merupakan daun (atau node yang tidak memiliki child)*/
void printLeaves(address root){
    if (root==NULL){
        return;
    }
    else if(left(root)==NULL && right(root)==NULL){
        cout<<info(root)<<" - ";
    }
    else{
        printLeaves(left(root));
        printLeaves(right(root));
    }
}

/**  mengembalikan jumlah Nodes yang terdapat pada Tree */
int countNode(address root){
    if(root==NULL){
        return 0;
    }
    else{
        if (left(root)!=NULL && right(root)!=NULL){
            return 1 + countNode(left(root)) + countNode(right(root));
        }
        else if(left(root)==NULL && right(root)!=NULL){
            return 1 + countNode(right(root));
        }
        else if (right(root)==NULL && left(root)!=NULL){
            return 1 + countNode(left(root));
        }
        else{
            return 1;
        }
    }
}

/**  [BONUS] */
/**  IS. terdefinisi root suatu Tree dan suatu node yang ada didalam tree
 *   FS. found berisi True jika node ditemukan, dan menampilkan semua leluhur dari node tersebut */
void printAncestor(address root, address node, bool &found){
    if (root == NIL){
        found = false;
    }else if (root == node){
        found = true;
    }else{
        bool leftFound;
        bool rightFound;
        printAncestor(left(root),node,leftFound);
        printAncestor(right(root),node,rightFound);
        found = leftFound || rightFound;
        if (found) {
            cout<<info(root)<<" - ";
        }
    }
}
