#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

#include <iostream>
#include <stdlib.h>

using namespace std;

void input_array_terakhir(int, int &, int);
void tampil_array(int, int);

int cari_array(int *arr, int n, int x);
void tambahkan_setelah_array(int arr[], int &n, int idx, int x);
void hapus_array_pertama(int arr[], int &n);

#endif // ARRAY_H_INCLUDED
