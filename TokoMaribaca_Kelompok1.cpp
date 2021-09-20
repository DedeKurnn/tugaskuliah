#include <iostream>
using namespace std;

/* 
Kelompok 1
Arbian Alex Pritama     2155061013
Dede Kurniawan          2115061072
M. Adil Hidayat         2115061068
Vidya Adelia Anya       2115061019
Rona Aprilia            2115061027
*/

int main()
{
    float diskon1 = 0.05;
    float diskon2 = 0.07;
    float diskon3 = 0.10;
    int uangPembeli, totalBelanjaBuku, totalBayar, kembalian, jumlahDiskon;

    cout << "--------------SELAMAT DATANG DI TOKO BUKU--------------" << endl;
    cout << "Silahkan bayar :";
    cin >> uangPembeli;
    cout << "Berapa total belanja buku : ";
    cin >> totalBelanjaBuku;

    cout << "-------------------------------------------------------" << endl;
    
    // Diskon 5% jika belanja diatas 100K dan dibawah 150K
    if(totalBelanjaBuku >= 100000 && totalBelanjaBuku < 150000) {
        jumlahDiskon = totalBelanjaBuku * diskon1;
        totalBayar = totalBelanjaBuku - jumlahDiskon;
        kembalian = uangPembeli - totalBayar;
        
        cout << "Selamat kamu dapat diskon 5%\n";
        cout << "Total yang harus kamu bayar = " << totalBayar << endl;
        cout << "Uang yang kamu bayarkan = " << uangPembeli << endl;
        cout << "Kembalian kamu = " << kembalian;
    }

    // Diskon 7% jika belanja diatas 150K dan dibawah 250K
    else if(totalBelanjaBuku >= 150000 && totalBelanjaBuku <= 250000) {
        jumlahDiskon = totalBelanjaBuku * diskon2;
        totalBayar = totalBelanjaBuku - jumlahDiskon;
        kembalian = uangPembeli - totalBayar;
        
        cout << "Selamat kamu dapat diskon 7%\n";
        cout << "Total yang harus kamu bayar = " << totalBayar << endl;
        cout << "Uang yang kamu bayarkan = " << uangPembeli << endl;
        cout << "Kembalian kamu = " << kembalian;
    }

    // Diskon 10% jika belanja diatas 250K
    else if(totalBelanjaBuku > 250000) {
        jumlahDiskon = totalBelanjaBuku * diskon3;
        totalBayar = totalBelanjaBuku - jumlahDiskon;
        kembalian = uangPembeli - totalBayar;
        
        cout << "Selamat kamu dapat diskon 10%\n";
        cout << "Total yang harus kamu bayar = " << totalBayar << endl;
        cout << "Uang yang kamu bayarkan = " << uangPembeli << endl;
        cout << "Kembalian kamu = " << kembalian;
    }

    // Tidak dapat diskon
    else {
        jumlahDiskon = totalBelanjaBuku * 0;
        totalBayar = totalBelanjaBuku - jumlahDiskon;
        kembalian = uangPembeli - totalBayar;
        
        cout << "Maaf kamu tidak dapat diskon\n";
        cout << "Total yang harus kamu bayar = " << totalBayar << endl;
        cout << "Uang yang kamu bayarkan = " << uangPembeli << endl;
        cout << "Kembalian kamu = " << kembalian;
    }
    return 0;
}

