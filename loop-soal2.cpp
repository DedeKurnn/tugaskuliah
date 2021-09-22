#include <iostream>
using namespace std;

int main() {
    int userInput, sum;

    for(int i=0; i<10; i++)
    {
        cout << "Masukan angka : ";
        cin >> userInput;

        sum = sum + userInput;
    }
    cout << "Total seluruh angka = " << sum << endl;
    cin.get();
    return 0;
}