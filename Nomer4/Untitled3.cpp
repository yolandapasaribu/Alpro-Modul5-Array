#include <iostream>

using namespace std;

int main()
{
    int A[3][3];
    int B[3][3];
    int hasil[3][3];

    cout<<"Masukkan Matrix A :"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"[" << i <<"]" << "[" << j << "]: ";
            cin>>A[i][j];
        }
    }

    cout<<"Masukkan Matrix B:"<<endl;
    for(int x=0;x<3;x++){
        for(int y=0;y<3;y++){
            cout<<"[" << x <<"]" << "[" << y << "]: ";
            cin>>B[x][y];
        }
    }
    cout<<"Hasil Matrix A : "<<endl;
    for(int i=0;i<=3;i++){
        for(int j=0;j<3;j++){
            cout<<A[i][j]<<" ";
        }
    }
    return 0;
}

