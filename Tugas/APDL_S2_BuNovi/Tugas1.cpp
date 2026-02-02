/*Nama Anggota Kelompok: (TUGAS APD LANJUT MEMBUAT ARRAY 1D)
1. Muhammad Fakih Nabal (2509105009) 
2. Muhammad Rafli Adila Risdi Saputra (2509106013) 
3. Jovan Christo Alvaro (2509106031)
*/

#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main(){
    int n;
    cout<<"Masukan Jumlah Data: ";
    cin>>n;
    system("cls");

    vector<int> nilai(n);

    for(int i = 0; i < n; i++){
         cout<<"Masukan Nilai Data ke-"<<i + 1<<":";
         cin>>nilai[i];
         system("cls");
    }

    system("cls");

    cout<<"Data Seluruh Nilai: ";
    for (int i = 0; i < n; i++){
        cout<<" "<<nilai[i]<<" ";
    }
    cout<<endl;
    cout<<"\n";
    for (int i = 0; i < n; i++){
        cout<<"Nilai Ke-"<<i+1<<":"<<" "<<nilai[i]<<","<<" "<<"Grade:"<<" ";
        
        if(nilai[i] >= 80 && nilai[i] <= 100){
            cout<<"A";
        }
        else if(nilai[i] >= 70 && nilai[i] <= 80){
            cout<<"B";
        }
        else if(nilai[i] >= 60 && nilai[i] <= 70){
            cout<<"C";
        }
        else if(nilai[i] >= 50 && nilai[i] <= 60){
            cout<<"D";
        }
        else if(nilai[i] >= 40 && nilai[i] <= 50){
            cout<<"E";
        }
        else if (nilai[i] > 100 || nilai[i] < 0 ){
            cout<<"Nilai ERROR";
        }
        else{
            cout<<"TIDAK LULUS";
        }
        cout<<endl;

    }
    return 0;
}