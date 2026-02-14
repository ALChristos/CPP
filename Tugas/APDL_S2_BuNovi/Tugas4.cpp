#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    int a;
    int b;
    int c;

    cout<<"Masukan Panjang Sisi Tegak Segitiga Siku-siku: ";
    cin>>a;
    cout<<"Masukan Panjang Alas Segitiga Siku-siku: ";
    cin>>b;
    cout<<"Masukan Panjang Sisi Miring Segitiga Siku-siku (Sisi Paling Besar): ";
    cin>>c;
    system("cls");

    if(pow(a, 2.0) + pow(b, 2.0) == pow(c,2.0)){
        cout<<"Sisi Tegak(a) = "<<a<<endl<<"Alas(b) = "<<b<<endl<<"Sisi Miring(c) = "<<c<<endl;
        cout<<endl;
        cout<<"Segitiga Merupakan Segitiga Siku-siku Dan ";
        cout<<"Segitiga Siku-siku Tersebut Juga Merupakan TRIPLE PHYTAGORAS, Karena:";
        cout<<endl;
        cout<<"Nilai (a^2 + b^2) == c^2";
    }

    else{
        cout<<"Sisi Tegak(a) = "<<a<<endl<<"Alas(b) = "<<b<<endl<<"Sisi Miring(c) = "<<c<<endl;
        cout<<endl;
        cout<<"Segitiga Bukan Merupakan Segitiga Siku-siku Dan Bukan TRIPEL PHYTAGORAS, Karena:"<<endl;
        cout<<"Nilai (a^2 + b^2) != c^2";
    }

    return 0;
}