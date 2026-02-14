//soal nomor 2

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    double matriks[2][2];
    double adjoin[2][2];
    double invers[2][2];

    cout<<"Masukan Elemen Matriks: "<<endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout<<"Elemen Matriks["<<i<<"]"<<"["<<j<<"]"<<":";
            cin>>matriks[i][j];
            system("cls");
            // system("clear");
        }
    }

    cout<<"Matriks 2x2:"<<endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout<<matriks[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<" "<<endl;
    
    adjoin[0][0] = matriks[1][1];   //A
    adjoin[0][1] = - matriks[0][1]; //B
    adjoin[1][0] = - matriks[1][0]; //C
    adjoin[1][1] = matriks[0][0];   //D, Biar Gak Susah
    
    cout<<"Adjoin Matriks 2x2:"<<endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout<<adjoin[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<" "<<endl;
    
    double det = (matriks[0][0] * matriks[1][1]) - (matriks[0][1] * matriks[1][0]);
    if(det == 0){
        cout << "Tidak punya invers"<<endl;
        return 0;
    }
    else
        cout<<"Determinan Dari Matriks Tersebut:"<<" "<<det<<endl;
        cout<<" "<<endl;
    
    invers[0][0] = (1/det) * adjoin[0][0];
    invers[0][1] = (1/det) * adjoin[0][1];
    invers[1][0] = (1/det) * adjoin[1][0];
    invers[1][1] = (1/det) * adjoin[1][1];
    
    cout<<"Nilai Invers Dari Matriks Tersebut:"<<endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout<<invers[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}