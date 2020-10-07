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
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"[" << i <<"]" << "[" << j << "]: ";
            cin>>B[i][j];
        }
    }
    cout<<"Hasil Matrix A : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Hasil Matrix B : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Hasil [A]+[B] = "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            hasil[i][j]=A[i][j]+B[i][j];
            cout<<hasil[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Hasil [A]-[B] = "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            hasil[i][j]=A[i][j]-B[i][j];
            cout<<hasil[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
