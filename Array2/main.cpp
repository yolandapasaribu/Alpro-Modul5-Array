//program array menggunakan looping
#include <iostream> //library input output pada program c++

using namespace std;//meringkas std program c++

int main()//program utama c++
{
    int panjang; //membuat var panjang tipe data integer
    cout << "Masukkan panjang array : "; //menghasilkan output masukkan panjang array
    cin >> panjang;//menginputkan suatu angka dan di simpan di var panjang

    string indomie[panjang]; //membuat var indomie yang memiliki index panjang (looping di bawah)

    for(int i=0;i<panjang;i++){//perulangan membuat panjang array
        cout << "Masukkan nama indomie ke- " << (i+1) << " : ";//mengoutputkan masukan nama indomi yang ke 1..dst
        cin >> indomie[i];//menginputkan suatu  jenis indomie yang disimpan di array i
    }
    cout<<"------------------------------------------"<<endl;

    cout << "Data indomie : "<<endl;//menampilkan output data indomie

    for(int j=0;j<panjang;j++){ //looping untuk panjang index di var panjang
        cout << indomie[j] << endl; //menampilkan output var indomie yang sudah ada indexnya
    }


    return 0;
}
