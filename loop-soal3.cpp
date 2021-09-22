#include <iostream>
using namespace std;

int main()
{
    int userInput, rataRata, banyakBilangan, jumlahTotal; 
    if(userInput != (-999)) {
        while(userInput != (-999)) {
            cout << "Masukan bilangan = ";
            cin >> userInput;
            banyakBilangan++;
            jumlahTotal = jumlahTotal + userInput;
            rataRata = jumlahTotal / banyakBilangan;
        }
        cout << "Jumlah total = " << jumlahTotal << endl;
        cout << "Banyak bilangan = " << banyakBilangan << endl;
        cout << "Rata-rata = " << rataRata << endl;
    } else {
        cout << "Tidak ada input yang di proses!" << endl;
    }
     


    cin.get();
    return 0;
}