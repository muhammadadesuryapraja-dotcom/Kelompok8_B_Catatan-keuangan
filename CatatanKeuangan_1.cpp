#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int MAX_TRANSAKSI = 100;


string kategori[MAX_TRANSAKSI];
double nominal[MAX_TRANSAKSI];
int jenis[MAX_TRANSAKSI]; // 1: Pemasukan, 2: Pengeluaran
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

