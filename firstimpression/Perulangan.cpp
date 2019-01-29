//Diberikan bilangan bulat positif a yang merupakan bilangan pokok dan bilangan positif n yang merupakan bilangan eksponen.
// Lalu outputkan hasil dari a^n menggunakan perulangan (for loop atau while loop).

// MENGGUNAKAN FOR

#include <iostream>
using namespace std;

int mainFor() {
  int a, n;
  cin >> a >> n;
  int y = 1;
  
  for (int i = 0; i < n; i++)
    y *= a;
  
  cout << y << endl;  
  
  return 0;
}

// MENGGUNAKAN WHILE


int mainWhile() {
  int a, n;
  cin >> a >> n;

  int res = 1;

  int i = 0;
  while (i < n) {
    res *= a;
    i++;
  }

  cout << res << endl;

  return 0;
}