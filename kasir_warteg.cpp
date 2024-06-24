#include <iostream>
using namespace std;

/*
kelompok kami berangggotakan
putra                   -.-.----
uswatun hasanah         23.11.5448
agustina septofanny     23.11.5471
khairul fikri           23.11.5442
*/

int main() {
    int jumlah;
    char input;
    double harga[] = {3000.0, 3000.0, 4000.0, 4000.0, 4000.0, 5000.0, 5000.0, 6000.0, 6000.0, 7000.0, 7000.0, 8000.0, 8000.0, 9000.0}; 
    double hargaminum[] = {1000.0, 3000.0, 3000.0, 3000.0, 3000.0, 3000.0, 3000.0, 3000.0, 3000.0, 3000.0, 4000.0, 4000.0, 4000.0}; 
    double total = 0.0;

awal:
    cout << "=================================" << endl;
    cout << "|      WARTEG BAHARI KASIR      |" << endl;
    cout << "=================================" << endl;
    cout << "lauk yang dipesan: ";
    cin >> jumlah;

    for (int i = 1; i <= jumlah; i++) {
        cout << "Pilih menu ke-" << i << ":" << endl;
        
        cout << "=================================" << endl;
        cout << "| MAKANAN    |\t\tHARGA   |" << endl;
        cout << "=================================" << endl;
        cout << endl;
        cout << "1. Nasi             \t(Rp " << harga[0]  << ")" << endl;
        cout << "2. Telur Balado     \t(Rp " << harga[6]  << ")" << endl;
        cout << "3. telur ceplok     \t(Rp " << harga[5]  << ")" << endl;
        cout << "4. Sambel Kentang   \t(Rp " << harga[3]  << ")" << endl;
        cout << "5. sambel usus      \t(Rp " << harga[2]  << ")" << endl;
        cout << "6. sayur jamur      \t(Rp " << harga[1]  << ")" << endl;
        cout << "7. rendang sapi     \t(Rp " << harga[12] << ")" << endl;
        cout << "8. kering tempe     \t(Rp " << harga[4]  << ")" << endl;
        cout << "9. ayam cabe ijo    \t(Rp " << harga[10] << ")" << endl;
        cout << "10. bebek goreng    \t(Rp " << harga[11] << ")" << endl;
        cout << "11. kikil sapi      \t(Rp " << harga[13] << ")" << endl;
        cout << "=================================" << endl;

        int pilihan;
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihan;
        cout << endl;

        if (pilihan >= 1 && pilihan <= 11) {
            total += harga[pilihan - 1]; 
        }
    }

    cout << "minuman yang dipesan: ";
    cin >> jumlah;

    for (int i = 1; i <= jumlah; i++) {
        cout << "Pilih menu ke-" << i << ":" << endl;

    cout << "=================================" << endl;
        cout << "| MINUMAN    |\t\tHARGA   |" << endl;
        cout << "=================================" << endl;
        cout << endl;
        cout << "1. teh es/panas           \t(Rp " << hargaminum[2]  << ")" << endl;
        cout << "2. jeruk es/panas         \t(Rp " << hargaminum[3]  << ")" << endl;
        cout << "3. air putih es/panas     \t(Rp " << hargaminum[0]  << ")" << endl;
        cout << "4. milo es/panas          \t(Rp " << hargaminum[4]  << ")" << endl;
        cout << "5. susu coklat es/panas   \t(Rp " << hargaminum[5]  << ")" << endl;
        cout << "6. nutrisari              \t(Rp " << hargaminum[6]  << ")" << endl;
        cout << "7. bengbeng               \t(Rp " << hargaminum[10] << ")" << endl;
        cout << "8. kopi kapal api         \t(Rp " << hargaminum[7]  << ")" << endl;
        cout << "9. kopi good day          \t(Rp " << hargaminum[8]  << ")" << endl;
        cout << "10. kopi ABC Susu         \t(Rp " << hargaminum[9]  << ")" << endl;
        cout << "11. Chocolatos coklat     \t(Rp " << hargaminum[11] << ")" << endl;
        cout << "12. Chocolatos Matcha     \t(Rp " << hargaminum[12] << ")" << endl;
        cout << "13. lemontea              \t(Rp " << hargaminum[1]  << ")" << endl;
        cout << "=================================" << endl;


    int pilihan;
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 13) {
            total += hargaminum[pilihan - 1]; 
        }
    }

    cout << "Total harga pesanan Anda adalah: Rp " << total << endl;
    cout << endl << endl << "apakah anda sudah selesai?:  ";
        cin >> input;

        if (input == 'y') {
            system("clear");
            }
}
