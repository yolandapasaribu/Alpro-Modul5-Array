#include <iostream>//library input output

using namespace std;//meringkas std pada program c++

int main()//program utama c++
{
    int baris, kolom;//variabel baris dan kolom tipe data integer
    cout<<"Masukkan baris : "; //membuat output kalimat masukan baris
    cin>>baris;//menginputkan suatu angka dan di simpan di var baris
    cout<<"Masukkan kolom : "; //membuat output kalimat masukan kolom
    cin>>kolom;//menginputkan suatu angka dan di simpan di var baris

    int matrix[baris][kolom]; //membuat var matrix array 2D yang berisi baris dan kolom
    /*int matrix[2][4]={{1,2,3,4}, //[baris][kolom] = {nilai baris 1}{nilai baris 2}
                        {5,6,7,8}};*/
    cout<<"Input Data Matrix : "<<endl;  //membuat output kalimat Input data matrix
    for(int i=0; i<baris; i++){ //looping untuk membuat array baris
        for(int j=0; j<kolom; j++){ //looping untuk membuat array kolom
            cout<<"[" << i <<"]" << "[" << j << "]: "; //menghasilkan output array baris dan kolom
            cin>>matrix[i][j];//inputan untuk nilai array matrix
        }
    }

    cout<<"Data Matrix : "<<endl; //membuat output kalimat data matrix
    for(int i=0;i<baris;i++){ //looping dari baris
        for(int j=0; j<kolom; j++){ // looping dari kolom
            cout<<matrix[i][j] << " ";//output dari array matrix dan inputannya
        }
        cout<<endl;
    }
    return 0;
}
