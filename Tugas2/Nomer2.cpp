#include <iostream>

using namespace std;

int main()
{
    int bil[10];
    int pilihan;
    int min,max=bil[0];
    float rerata;
    float jml=0;

    cout<<"MENU"<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<"1. Input Array"<<endl;
    cout<<"2. Tampil Array"<<endl;
    cout<<"3. Cari Nilai Minimum"<<endl;
    cout<<"4. Cari Nilai Maksimum"<<endl;
    cout<<"5. Hitung Rata-rata"<<endl;
  
    for(int i=0;i<10;i++){
    	 cout<<"-------------------------------"<<endl;
        cout<<"Masukkan Pilihan : ";
        cin>>pilihan;
        cout<<"-------------------------------"<<endl;

        switch(pilihan){
        case 1:
            for(int i=0;i<10;i++){
            cout<<"Masukkan Array ke-"<<i+1<<" : ";
            cin>>bil[i];
            }
            break;
            cout<<"-------------------------------"<<endl;
        case 2:
            for(int i=0;i<10;i++){
            cout<<"Array ke-"<<i+1<<" : "<<bil[i]<<endl;
            }
            break;
            cout<<"-------------------------------"<<endl;
        case 3:
            min=bil[0];
            for(int i=0;i<10;i++){
                if(bil[i]<min){
                    min=bil[i];
                }
            }
            cout<<"Nilai Minimum : "<<min<<endl;
            break;
        case 4:
            max=bil[0];
            for(int i=0;i<10;i++){
                if (bil[i]>max){
                    max=bil[i];
                }
            }
            cout<<"Nilai Maximum : "<<max<<endl;
            break;
        case 5:
            for(int i=0;i<10;i++){
                jml=jml+bil[i];
            }
            rerata=jml/10;
            cout<<"Nilai Rata-rata : "<<rerata<<endl;
            break;
        }
    }

    return 0;
}
