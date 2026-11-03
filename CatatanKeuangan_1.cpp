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
.
