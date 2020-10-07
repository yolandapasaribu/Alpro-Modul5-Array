#include <iostream>

using namespace std;

string bulan[] ={"Januari","Februari","Maret","April","Mei","Juni","Juli","Agustus","September","Oktober","November","Desember"};

int inputan;
int main()
{
    cout << "Masukkan nomer bulan : " << endl;
    cin >> inputan;
    cout << "Bulan yang diinputkan : " << bulan[inputan-0];
    return 0;
}
