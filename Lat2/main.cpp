#include <iostream>

using namespace std;

string daftar_mahasiswa[39];
int jml_mahasiswa;
int main()
{
    cout << "Jumlah mahasiswa yang disimpan : ";
    cin >> jml_mahasiswa;
    int i;
    string nama;

    for (i=0; i<jml_mahasiswa; i++){
        cout<<"Nama mahasiswa :";
        cin>>nama;
        daftar_mahasiswa[i]=nama;
    }
    cout<<"Nama yang disimpan :"<<endl;
    for(i=0;i<jml_mahasiswa;i++){
        cout <<daftar_mahasiswa[i]<<endl;
    }
    return 0;
}
