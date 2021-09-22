#include <iostream>
using namespace std;

int main() {
    int n, i, sum;
    cout << "Masukan N = ";
    cin >> n;
    sum = 0;
    i = 1;
    do {
        cout << i << endl;
        sum = sum + i;
        i = i + 1;
    } while (i <= n);
    cout << "Jumlah = " << sum << endl;

    cin.get();
    return 0;
}