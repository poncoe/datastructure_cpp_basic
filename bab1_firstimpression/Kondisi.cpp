// conditional if pada bahasa pemrograman C++.
// Diberikan inputan sebuah bilangan bulat $$N$$.
// Lalu tugas anda adalah jika $$N$$ adalah kelipatan 3 cetak Fizz,
// jika kelipatan 5 cetak Buzz, lalu jika keduanya cetak FizzBuzz,
// dan jika tidak outputkan bilangan tersebut.


#include <iostream>

using namespace std;

int mainKondisi() {
    int n;
    cin >> n;

    if ((n % 3 == 0) && (n % 5 == 0))
        cout << "FizzBuzz" << endl;
    else if (n % 3 == 0)
        cout << "Fizz" << endl;
    else if ( n % 5 == 0)
        cout << "Buzz" << endl;
    else
        cout << n << endl;

    return 0;
}
