#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int MAX_TRANSAKSI = 100;


string kategori[MAX_TRANSAKSI];
double nominal[MAX_TRANSAKSI];
int jenis[MAX_TRANSAKSI]; 
int jumlahData = 0;

// menu
void tampilkanMenu() {
    cout << "\n=========================================\n";
    cout << "     Aplikasi Keuangan Pribadi (SmartWallet)\n";
    cout << "=========================================\n";
    cout << "1. Tambah Pemasukan / Pengeluaran\n";
    cout << "2. Lihat Ringkasan & Riwayat Transaksi\n";
    cout << "3. Keluar\n";
    cout << "-----------------------------------------\n";
    cout << "Pilih menu (1-3): ";
}
void tambahTransaksi() {
    if (jumlahData >= MAX_TRANSAKSI) {
        cout << "\n[!] Kapasitas penyimpanan transaksi penuh!\n";
        return;
    }

    cout << "\n--- Tambah Transaksi Baru ---\n";
    cout << "Jenis Transaksi (1: Pemasukan, 2: Pengeluaran): ";
    cin >> jenis[jumlahData];

    if (jenis[jumlahData] != 1 && jenis[jumlahData] != 2) {
        cout << "[!] Pilihan jenis transaksi tidak valid.\n";
        return;
    }

    cin.ignore(); 
    cout << "Keterangan/Kategori (misal: Gaji, Makan, Transport): ";
    getline(cin, kategori[jumlahData]);

    cout << "Nominal (Rp): ";
    cin >> nominal[jumlahData];

    jumlahData++;
    cout << "[v] Transaksi berhasil dicatat!\n";
}
<<<<<<< HEAD

double hitungSaldoTotal() {
    double totalPemasukan = 0;
    double totalPengeluaran = 0;

    
    for (int i = 0; i < jumlahData; i++) {
        if (jenis[i] == 1) {
            totalPemasukan += nominal[i];
        } else if (jenis[i] == 2) {
            totalPengeluaran += nominal[i];
        }
    }

    return totalPemasukan - totalPengeluaran;
}


void tampilkanLaporan() {
    cout << "\n=========================================\n";
    cout << "        Riwayat & Laporan Keuangan       \n";
    cout << "=========================================\n";

    if (jumlahData == 0) {
        cout << "Belum ada transaksi yang dicatat.\n";
        return;
    }

    
    for (int i = 0; i < jumlahData; i++) {
        string tipe = (jenis[i] == 1) ? "[Pemasukan]  " : "[Pengeluaran]";
        cout << i + 1 << ". " << tipe << " " << kategori[i] 
             << " - Rp" << fixed << setprecision(0) << nominal[i] << endl;
    }

    double saldoAkhir = hitungSaldoTotal();
    cout << "-----------------------------------------\n";
    cout << "Sisa Saldo Saat Ini : Rp" << fixed << setprecision(0) << saldoAkhir << endl;

    
    if (saldoAkhir < 0) {
        cout << "[!] PERINGATAN: Pengeluaran Anda melebihi Pemasukan (Defisit)!\n";
    } else if (saldoAkhir < 50000 && saldoAkhir >= 0) {
        cout << "[!] PERINGATAN: Saldo Anda hampir habis!\n";
    }
}


int main() {
    int pilihan;

    
    do {
        tampilkanMenu();
        cin >> pilihan;

        
        switch (pilihan) {
            case 1:
                tambahTransaksi();
                break;
            case 2:
                tampilkanLaporan();
                break;
            case 3:
                cout << "\nTerima kasih telah menggunakan SmartWallet!\n";
                break;
            default:
                cout << "\n[!] Pilihan menu tidak valid. Coba lagi.\n";
        }
    } while (pilihan != 3);

    return 0;
}

=======
.
>>>>>>> 42009d05970e866a05cc98b6634f629469123d59
