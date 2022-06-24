//Nama    : Asep Saeful Rohman
//NIM     : A11.2021.13705
//Kelas   : 4216

#include <iostream>

using namespace std;

int n,a,b;
int penjumlahan(int a, int b);
int pengurangan(int a, int b);
int perkalian(int a,int b);
int faktorial(int n);

int pilih;


int main()
{
    cout << " ===================================================== " << endl;
    cout << " ||                 PROGRAM SEDERHANA               || " << endl;
    cout << " ||                ASEP SAEFUL ROHMAN               || " << endl;
    cout << " ||                   REKURSIF C++                  || " << endl;
    cout << " ===================================================== " << endl;
    cout << " || Silahkan Pilih Menu Di Bawah Ini                || " << endl;
    cout << " || 1. Penjumlahan                                  || " << endl;
    cout << " || 2. Pengurangan                                  || " << endl;
    cout << " || 3. Perkalian                                    || " << endl;
    cout << " || 4. Faktorial                                    || " << endl;
    cout << " ===================================================== " << endl;
    cout << " Pilihan Anda : ";
    cin >> pilih;


    switch(pilih){
        case 1 :
            cout << " ===================================================== " << endl;
            cout << " ||                   Penjumlahan                   || " << endl;
            cout << " ===================================================== " << endl;
            cout << " Masukkan Angka Pertama = ";
            cin >> a;
            cout << " Masukkan Angka Kedua   = ";
            cin >> b;
            cout << " Hasil Dari Penjumlahan Antara " << a << " Dan " << b << " Adalah " << penjumlahan(a, b) << endl;
            break;
        case 2 :
            cout << " ===================================================== " << endl;
            cout << " ||                   Pengurangan                   || " << endl;
            cout << " ===================================================== " << endl;
            cout << " Masukkan Angka Pertama = ";
            cin >> a;
            cout << " Masukkan Angka Kedua   = ";
            cin >> b;
            cout << " Hasil Dari Pengurangan Antara " << a << " Dan " << b << " Adalah " << pengurangan(a,b) << endl;
            break;
        case 3 :
            cout << " ===================================================== " << endl;
            cout << " ||                   Perkalian                     || " << endl;
            cout << " ===================================================== " << endl;
            cout << " Masukkan Angka Pertama = ";
            cin >> a;
            cout << " Masukkan Angka Kedua   = ";
            cin >> b;
            cout << " Hasil Dari Perkalian Antara " << a << " Dan " << b << " Adalah " << perkalian(a,b) << endl;
            break;
        case 4 :
            cout << " ===================================================== " << endl;
            cout << " ||                    Faktorial                    || " << endl;
            cout << " ===================================================== " << endl;
            cout << " Masukkan Nilai Faktorial = ";
            cin >> n;
            cout << " Hasil Faktorial Dari Angka " << n << " Adalah " << faktorial(n) << endl;
            break;

        default :
            cout << " Menu Yang Ada pilih tidak ada " << endl;

    }

    return 0;
}

int penjumlahan(int a, int b)
{
    if (a == 0 )
    {
        return b;
    } else {
        return penjumlahan(a-1, b) + 1;
    }
}

int pengurangan(int a, int b)
{
    if (b == 0 )
    {
        return a;
    } else {
        return pengurangan(a, b - 1) - 1;
    }
}

int faktorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * faktorial(n - 1);
    }
}


int perkalian(int a,int b)
{
    if (b == 1)
    {
        return a;
    }
    else
    {
        return a + perkalian(a, b - 1);
    }
}
