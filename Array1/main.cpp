//program array 1D
#include <iostream>//library input output c++

using namespace std;//meringkas std pada program c++

int main()//program  utama c++
{
    int TabJumlahHari[12]; // indeks 0..11
    float TabNilai [15]; // indeks 0..14
    char TabHuruf [100]; // indeks 0..99
    string TabKata [100]; // indeks 0..19

    cout<<"------------------------------------------"<<endl;

    char array1[]={'a','b','c','d','e','f'}; //membuat array 1 dimensi dengan tipe data char

   
    cout<<"data dari array index ke-2 : "<<array1[2]<<endl;//menampilkan output data dari array index ke 2
    
	int array2 [5];//variabel array yang memiliki index panjang 5

    array2[0]=1;//array ke 0 memiliki nilai indeks 1
    array2[1]=3;//array ke 1 memiliki nilai indeks 3
    array2[2]=5;//array ke 2 memiliki nilai indeks 5
    array2[3]=7;//array ke 3 memiliki nilai indeks 7
    array2[4]=9;//array ke 4 memiliki nilai indeks 9

    cout<<"data dari array index ke-4 : "<<array2[4]<<endl;//menampilkan output data dari array index ke 4

    cout<<"------------------------------------------"<<endl;

    return 0;
}
