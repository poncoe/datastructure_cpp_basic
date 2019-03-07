//Diberikan dua buah bilangan bulat a dan b.
// Cetak nilai awal a dan b, lalu
// tukar nilainya menggunakan prosedur yang kemudian dicetak lagi nilai a dan b,
// yang terakhir cetak hasil dari a.


#include<iostream>

using namespace std;

int multiple(int a, int b) {  
  return a*b;
}

void swap(int &a, int &b) {
  a = a+b;
  b = a-b;
  a = a-b;
}

int mainFungsi() {
  int a, b;
  cin >> a >> b;
  
  cout << a << ' ' << b << endl;
    
  swap(a,b);
  cout << a << ' ' << b << endl;
  
  cout << multiple(a,b);
  
  return 0;
}