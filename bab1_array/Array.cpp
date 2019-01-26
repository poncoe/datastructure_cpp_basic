#include "Array.h"

void input_array_terakhir(int *arr, int &n, int x) {
    arr[n++]=x;
}

void tampil_array(int *arr, int n) {
    if(n==0)cout<<"kosong";
    for(int i=0; i<n; i++)cout<<arr[i]<<", ";
    cout<<endl;
}


int cari_array(int *arr, int n, int x){
    /** cari x didalam array arr, return -1 jika tidak ditemukan */
    int i = 0;
    while ((i < n) && (arr[i] != x)) {
        i++;
    }
    if (arr[i] == x) {
        return i;
    } else {
        return -1;
    }
}

void tambahkan_setelah_array(int *arr, int &n, int idx, int x){
    /** masukan angka x ke array arr setelah index idx*/
    int i = n;
    if ((idx >= 0) && (idx < n)){
        while (i>idx) {
            arr[i+1] = arr[i];
            i--;
        }
        arr[idx+1]=x;
        n++;
    }
}

void hapus_array_pertama(int *arr, int &n){
    /** hapus elemen pertama didalam array arr*/
    int i = 0;
    while (i <= n){
        arr[i] = arr[i+1];
        i=i+1;
    }
    n--;
}
