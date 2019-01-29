//Diberikan bilangan bulat N yang merupakan panjang dari sebuah array.
// Lalu pada baris berikutnya inputkan setiap bilangan bulat i sebanyak N yang dipisahkan oleh spasi.
// Kemudian cetak nilai dari setiap elemen dari array tersebut.


#include<iostream>

using namespace std;

int mainArray() {
  int n;
  cin >> n;
  
  int arr[n];
  
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  
  for (int i = 0; i < n; i++) {
    cout << arr[i] << ' ';
  }
  cout << endl;
  
  return 0;
}